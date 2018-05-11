#include <cstring>
#include "QwertyParserBaseVisitorImpl.h"
#include "QwertySyntaxException.h"
#include "PairSet.h"

const std::string REPLACE_FIRST_OCCURRENCE_FUNCTION =
        "std::string replaceFirstOccurrence(std::string &s,\n"
        "                                   const std::string &toReplace,\n"
        "                                   const std::string &replaceWith) {\n"
        "    std::size_t pos = s.find(toReplace);\n"
        "    if (pos == std::string::npos) return s;\n"
        "    return s.replace(pos, toReplace.length(), replaceWith);\n"
        "}\n\n";

const std::string FIND_TO_X_FUNCTION =
        "std::string substr_to_x(const std::string &s, int x) {\n"
        "    if (x < 0 || x > (int) s.length()) {\n"
        "        return \"\";\n"
        "    };\n"
        "    return s.substr(0, static_cast<unsigned long>(x));\n"
        "}\n\n";

const std::string FIND_FROM_X_FUNCTION =
        "std::string substr_from_x(const std::string &s, int x) {\n"
        "    if (x > (int) s.length()) {\n"
        "        return \"\";\n"
        "    };\n"
        "    return s.substr(static_cast<unsigned long>(x), s.length());\n"
        "}\n\n";

AntlrQwerty::QwertyParserBaseVisitorImpl::QwertyParserBaseVisitorImpl(const VariableSet &scopeVariables)
        : scopeVariables(scopeVariables), functions() {}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitProgram(AntlrQwerty::QwertyParser::ProgramContext *ctx) {
    std::string ret;

    ret += "#include <algorithm>\n";
    ret += "#include <iostream>\n";
    ret += "#include <list>\n";
    ret += "#include <string>\n\n";
    ret += REPLACE_FIRST_OCCURRENCE_FUNCTION;
    ret += FIND_FROM_X_FUNCTION;
    ret += FIND_TO_X_FUNCTION;

    if (!ctx->function().empty()) {
        for (auto f: ctx->function()) {
            auto function_visitor = new QwertyParserBaseVisitorImpl(scopeVariables);
            ret += function_visitor->visitFunction(f).as<std::string>();
            delete function_visitor;
        }
    }

    ret += "int main() {\n";
    if (!ctx->expression().empty()) {
        for (auto e: ctx->expression()) {
            ret += visitExpression(e).as<std::string>();
        }
    }
    ret += "return 0;\n";
    ret += "}\n";

    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitExpression(AntlrQwerty::QwertyParser::ExpressionContext *ctx) {
    std::string ret;
    if (ctx->instruction()) {
        ret += visitInstruction(ctx->instruction()).as<std::string>() + "\n";
    } else {
        ret += visitOperation(ctx->operation()).as<std::string>() + ";\n";
    }
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitFunction(
        AntlrQwerty::QwertyParser::FunctionContext *ctx) noexcept(false) {
    std::string ret;
    ret += ctx->type() ? visitType(ctx->type()).as<std::string>() + " " : "void ";
    if (ctx->name()) {
        const auto func_name = visitName(ctx->name()).as<std::string>();
        ret += func_name;
        if (functions.find(func_name) == functions.end()) {
            functions.insert(func_name);
        } else {
            throw QwertySyntaxException(("Function with name \"" + func_name + "\" is already defined\n").c_str());
        }
    }
    ret += "(";
    if (ctx->param_def()) {
        ret += visitParam_def(ctx->param_def()).as<std::string>();
    }
    ret += ") {\n";
    if (ctx->operators()) {
        ret += visitOperators(ctx->operators()).as<std::string>();
    }
    ret += "}\n\n";
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitParam_def(
        AntlrQwerty::QwertyParser::Param_defContext *ctx) noexcept(false) {
    std::string ret;
    if (!ctx->getText().empty()) {
        for (unsigned long i = 0; i < ctx->type().size(); ++i) {
            const auto type_name = visitType(ctx->type().at(i)).as<std::string>();
            const auto var_name = visitName(ctx->name().at(i)).as<std::string>();
            if (scopeVariables.findBySecond(var_name) == scopeVariables.end()) {
                ret += type_name + " " + var_name;
                if (i < ctx->type().size() - 1) {
                    ret += ", ";
                }
                scopeVariables.insert(std::pair<std::string, std::string>(ctx->type().at(i)->getText(), var_name));
            } else {
                throw QwertySyntaxException(("Variable with name \"" + var_name + "\" is already defined\n").c_str());
            }
        }
    }
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitOperators(AntlrQwerty::QwertyParser::OperatorsContext *ctx) {
    std::string ret;

    if (!ctx->expression().empty()) {
        for (auto e: ctx->expression()) {
            ret += visitExpression(e).as<std::string>();
        }
    }

    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitInstruction(AntlrQwerty::QwertyParser::InstructionContext *ctx) {
    std::string ret;

    if (ctx->if_instruction()) {
        ret += visitIf_instruction(ctx->if_instruction()).as<std::string>();
    } else if (ctx->for_instruction()) {
        ret += visitFor_instruction(ctx->for_instruction()).as<std::string>();
    } else if (ctx->while_instruction()) {
        ret += visitWhile_instruction(ctx->while_instruction()).as<std::string>();
    } else if (ctx->definition_instruction()) {
        ret += visitDefinition_instruction(ctx->definition_instruction()).as<std::string>();
    } else if (ctx->assign_instruction()) {
        ret += visitAssign_instruction(ctx->assign_instruction()).as<std::string>();
    } else if (ctx->print()) {
        ret += visitPrint(ctx->print()).as<std::string>();
    } else if (ctx->return_instruction()) {
        ret += visitReturn_instruction(ctx->return_instruction()).as<std::string>();
    }

    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitIf_instruction(AntlrQwerty::QwertyParser::If_instructionContext *ctx) {
    std::string ret;

    ret += "if (" + visitCondition(ctx->condition()).as<std::string>() + " ) {\n";
    ret += visitThen_block(ctx->then_block()).as<std::string>();
    ret += "}";
    if (ctx->else_block()) {
        ret += " else {\n";
        ret += visitElse_block(ctx->else_block()).as<std::string>();
        ret += "}";
    }
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitThen_block(AntlrQwerty::QwertyParser::Then_blockContext *ctx) {
    return visitOperators(ctx->operators()).as<std::string>();
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitElse_block(AntlrQwerty::QwertyParser::Else_blockContext *ctx) {
    return visitOperators(ctx->operators()).as<std::string>();
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitFor_instruction(
        AntlrQwerty::QwertyParser::For_instructionContext *ctx) noexcept(false) {
    std::string ret;

    std::string iterable;
    if (ctx->operand()) {
        iterable = getIterableString(ctx->operand());
    } else {
        iterable = visitOperation(ctx->operation()).as<std::string>();
    }

    const auto name = visitName(ctx->name()).as<std::string>();
    ret += "for (auto " + name + " : " + iterable + ") {\n";
    if (scopeVariables.findBySecond(name) != scopeVariables.end()) {
        throw QwertySyntaxException(("Variable with name \"" + name + "\" is already defined\n").c_str());
    }
    scopeVariables.insert(std::pair<std::string, std::string>("str", name));
    ret += visitOperators(ctx->operators()).as<std::string>();
    ret += "}";

    return ret;
}

std::string
AntlrQwerty::QwertyParserBaseVisitorImpl::getIterableString(
        AntlrQwerty::QwertyParser::OperandContext *ctx) noexcept(false) {

    std::string iterable;
    if (ctx->name()) {
        auto var = scopeVariables.findBySecond(visitName(ctx->name()).as<std::string>());
        if (0 != strncmp(var->first.c_str(), "list", 4)) {
            throw QwertySyntaxException((var->second + " is not iterable\n").c_str());
        } else {
            iterable = var->second;
        }
    } else if (ctx->array() || ctx->ident()->STRING()) {
        iterable += visitOperand(ctx).as<std::string>();
    } else {
        throw QwertySyntaxException((ctx->getText() + " is not iterable\n").c_str());
    }
    return iterable;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitWhile_instruction(
        AntlrQwerty::QwertyParser::While_instructionContext *ctx) {
    std::string ret;

    ret += "while (" + visitCondition(ctx->condition()).as<std::string>() + ") {\n";
    ret += visitOperators(ctx->operators()).as<std::string>();
    ret += "}";

    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitDefinition_instruction(
        AntlrQwerty::QwertyParser::Definition_instructionContext *ctx) {
    std::string ret;
    const auto type = visitType(ctx->type()).as<std::string>();
    const auto name = visitName(ctx->name()).as<std::string>();
    if (scopeVariables.findBySecond(name) != scopeVariables.end()) {
        throw QwertySyntaxException(("Variable with name \"" + name + "\" is already defined\n").c_str());
    } else {
        ret += type + " ";
        ret += name;
        scopeVariables.insert(std::pair<std::string, std::string>(ctx->type()->getText(), name));
    }
    if (ctx->operation()) {
        ret += " = " + visitOperation(ctx->operation()).as<std::string>();
    }
    ret += ";";
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitAssign_instruction(
        AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) {
    std::string ret;
    if (ctx->name()) {
        ret += simpleAssignTranslation(ctx);
    } else if (ctx->get_item()) {
        ret += insertAssignTranslation(ctx);
    } else {
        ret += replaceAssignTranslation(ctx);
    }
    return ret;
}

std::string
AntlrQwerty::QwertyParserBaseVisitorImpl::simpleAssignTranslation(
        AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) noexcept(false) {
    std::string ret;
    const auto name = visitName(ctx->name()).as<std::__cxx11::string>();
    if (scopeVariables.findBySecond(name) == scopeVariables.end()) {
        throw QwertySyntaxException(("Undefined variable \"" + name + "\"\n").c_str());
    }
    ret += name;
    ret += " = ";
    ret += visitOperation(ctx->operation()).as<std::__cxx11::string>() + ";";
    return ret;
}

std::string
AntlrQwerty::QwertyParserBaseVisitorImpl::insertAssignTranslation(
        AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) noexcept(false) {
    std::string ret;
    auto var_name = ctx->get_item()->operand()->name();
    if (var_name) {
        const auto var = scopeVariables.findBySecond(visitName(var_name).as<std::string>());
        if (var == scopeVariables.end()) {
            throw QwertySyntaxException(("Undefined variable \"" + var->second + "\"").c_str());
        } else if (var->first == "str") {
            auto operand = ctx->get_item()->item_index1()->operand();
            std::string type;
            if (operand->name()) {
                type = scopeVariables.findBySecond(operand->name()->getText())->first;
            }

            if (type == "int" || operand->ident()->NUMBER()) {
                const auto index = visitItem_index1(ctx->get_item()->item_index1()).as<std::string>();
                ret += var->second + ".insert(" + index + ", std::string(" +
                       visitOperation(ctx->operation()).as<std::string>() +
                       "));";
            } else if (type == "str" || operand->ident()->STRING()) {
                const auto substr = visitItem_index1(ctx->get_item()->item_index1()).as<std::string>();
                const auto string1 = visitOperation(ctx->operation()).as<std::string>();
                ret += "replaceFirstOccurrence(" + var->second + ", " + substr + ", " + string1 + ");";
            } else {
                throw QwertySyntaxException("Incompatible type for assign operation");
            }
        } else if (0 == strncmp(var->first.c_str(), "list", 4)) {
            const auto index = visitItem_index1(ctx->get_item()->item_index1()).as<std::string>();
            ret += var->second + ".emplace(" + var->second + ".begin() + " + index + ", std::string(" +
                   visitOperation(ctx->operation()).as<std::string>() + "));";
        } else {
            throw QwertySyntaxException(std::string(var->second + " is not iterable\n").c_str());
        }
    } else {
        throw QwertySyntaxException(std::string("Could not assign to constant value\n").c_str());
    }
    return ret;
}

std::string
AntlrQwerty::QwertyParserBaseVisitorImpl::replaceAssignTranslation(
        AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) noexcept(false) {
    std::string ret;
    auto var_name = ctx->get_slice()->operand()->name();
    if (var_name) {
        const auto var = scopeVariables.findBySecond(visitName(var_name).as<std::string>());
        if (var == scopeVariables.end()) {
            throw QwertySyntaxException(("Undefined variable \"" + var->second + "\"").c_str());
        } else if (var->first == "str") {
            const auto index1 = visitItem_index1(ctx->get_slice()->item_index1()).as<std::string>();
            const auto index2 = visitItem_index2(ctx->get_slice()->item_index2()).as<std::string>();
            ret += var->second + " = substr_to_x(" + var->second + ", " + index1 + ") + " +
                   visitOperation(ctx->operation()).as<std::string>() + " + substr_from_x(" + var->second + ", " +
                   index2 + ");";
        } else if (0 == strncmp(var->first.c_str(), "list", 4)) {
            const auto index1 = visitItem_index1(ctx->get_slice()->item_index1()).as<std::string>();
            const auto index2 = visitItem_index2(ctx->get_slice()->item_index2()).as<std::string>();
            ret += "std::replace(" + var->second + ".begin() + " + index1 + ", " +
                   var->second + ".begin() + " + index2 + ", " +
                   visitOperation(ctx->operation()).as<std::string>() + ");";
        } else {
            throw QwertySyntaxException(std::string(var->second + " is not iterable\n").c_str());
        }
    } else {
        throw QwertySyntaxException(std::string("Could not assign to constant value\n").c_str());
    }
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitPrint(AntlrQwerty::QwertyParser::PrintContext *ctx) {
    std::string ret;
    ret += "std::cout";
    for (auto param: ctx->param_list()->operation()) {
        if (param->operand() && param->operand()->name()) {
            auto name = visitName(param->operand()->name()).as<std::string>();
            if (scopeVariables.findBySecond(name) == scopeVariables.end()) {
                throw QwertySyntaxException(("Variable with name \"" + name + "\" does not exists\n").c_str());
            } else {
                ret += " << " + visitOperation(param).as<std::string>();
            }
        }
        ret += " << " + visitOperation(param).as<std::string>();

    }
    ret += ";";
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitReturn_instruction(
        AntlrQwerty::QwertyParser::Return_instructionContext *ctx) {
    return "return " + visitOperation(ctx->operation()).as<std::string>() + ";";
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitOperation(AntlrQwerty::QwertyParser::OperationContext *ctx) {
    std::string ret;

    if (ctx->function_call()) {
        ret += visitFunction_call(ctx->function_call()).as<std::string>();
    } else if (ctx->get_item()) {
        ret += visitGet_item(ctx->get_item()).as<std::string>();
    } else if (ctx->get_slice()) {
        ret += visitGet_slice(ctx->get_slice()).as<std::string>();
    } else if (ctx->SUM()) {
        ret += visitOperation(ctx->operation().at(0)).as<std::string>() + " + " +
               visitOperation(ctx->operation().at(1)).as<std::string>();
    } else if (ctx->IN()) {
        ret += visitOperation(ctx->operation().at(1)).as<std::string>() + ".find(" +
               visitOperation(ctx->operation().at(0)).as<std::string>() + ")";
    } else if (ctx->EQ()) {
        ret += visitOperation(ctx->operation().at(0)).as<std::string>() + " == " +
               visitOperation(ctx->operation().at(1)).as<std::string>();
    } else if (ctx->len_function()) {
        ret += visitLen_function(ctx->len_function()).as<std::string>();
    } else if (ctx->operand()) {
        ret += visitOperand(ctx->operand()).as<std::string>();
    }

    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitFunction_call(AntlrQwerty::QwertyParser::Function_callContext *ctx) {
    std::string ret;
    ret += visitName(ctx->name()).as<std::string>() + "(" + visitParam_list(ctx->param_list()).as<std::string>() + ")";
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitGet_item(AntlrQwerty::QwertyParser::Get_itemContext *ctx) {
    std::string ret;
    std::string operand = visitOperand(ctx->operand()).as<std::string>();
    if (ctx->operand()->name()) {
        const auto name = scopeVariables.findBySecond(operand);
        if (name == scopeVariables.end()) {
            throw QwertySyntaxException(("Variable with name \"" + operand + "\" does not exists\n").c_str());
        } else if (name->first != "str" || 0 != strncmp(name->second.c_str(), "list", 4)) {
            throw QwertySyntaxException((name->first + " type is not iterable").c_str());
        }
    }
    ret += visitOperand(ctx->operand()).as<std::string>() + ".at(" +
           visitItem_index1(ctx->item_index1()).as<std::string>() + ")";
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitGet_slice(AntlrQwerty::QwertyParser::Get_sliceContext *ctx) {
    std::string ret;
    std::string operand = visitOperand(ctx->operand()).as<std::string>();
    if (ctx->operand()->name()) {
        const auto name = scopeVariables.findBySecond(operand);
        if (name == scopeVariables.end()) {
            throw QwertySyntaxException(("Variable with name \"" + operand + "\" does not exists\n").c_str());
        } else if (name->first != "str" || 0 != strncmp(name->second.c_str(), "list", 4)) {
            throw QwertySyntaxException((name->first + " type is not iterable").c_str());
        }
    }
    ret += visitOperand(ctx->operand()).as<std::string>() + ".substr(" +
           visitItem_index1(ctx->item_index1()).as<std::string>() + ", " +
           visitItem_index2(ctx->item_index2()).as<std::string>() + ")";
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitItem_index1(AntlrQwerty::QwertyParser::Item_index1Context *ctx) {
    return visitOperand(ctx->operand());
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitItem_index2(AntlrQwerty::QwertyParser::Item_index2Context *ctx) {
    return visitOperand(ctx->operand());
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitParam_list(AntlrQwerty::QwertyParser::Param_listContext *ctx) {
    std::string ret;
    for (unsigned long i = 0; i < ctx->operation().size(); ++i) {
        ret += visitOperation(ctx->operation().at(i)).as<std::string>();
        if (i < ctx->operation().size() - 1) {
            ret += ", ";
        }
    }
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitLen_function(AntlrQwerty::QwertyParser::Len_functionContext *ctx) {
    std::string ret;
    ret += visitOperation(ctx->operation()).as<std::string>() + ".length()";
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitCondition(AntlrQwerty::QwertyParser::ConditionContext *ctx) {
    std::string ret;
    auto conjunctions = ctx->logical_conj();
    for (unsigned long i = 0; i < conjunctions.size() - 1; ++i) {
        ret += visitLogical_conj(conjunctions.at(i)).as<std::string>() + " || ";
    }
    ret += visitLogical_conj(conjunctions.at(conjunctions.size() - 1)).as<std::string>();
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitLogical_conj(AntlrQwerty::QwertyParser::Logical_conjContext *ctx) {
    std::string ret;
    if (ctx->condition()) {
        ret += '(' + visitCondition(ctx->condition()).as<std::string>() + ')';
    } else {
        auto logical_factor = ctx->logical_factor();
        for (unsigned long i = 0; i < logical_factor.size() - 1; ++i) {
            ret += visitLogical_factor(logical_factor.at(i)).as<std::string>() + " && ";
        }
        ret += visitLogical_factor(logical_factor.at(logical_factor.size() - 1)).as<std::string>();
    }
    return ret;
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitLogical_factor(AntlrQwerty::QwertyParser::Logical_factorContext *ctx) {
    std::string ret;
    if (ctx->negation()) {
        ret += "!";
    }
    ret += ctx->condition()
           ? visitCondition(ctx->condition()).as<std::string>()
           : visitOperation(ctx->operation()).as<std::string>();
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitType(AntlrQwerty::QwertyParser::TypeContext *ctx) {
    std::string ret;
    if (ctx->BOOL()) {
        ret += "bool";
    } else if (ctx->INT()) {
        ret += "int";
    } else if (ctx->STR()) {
        ret += "std::string";
    } else if (ctx->list()) {
        ret += visitList(ctx->list()).as<std::string>();
    }
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitList(AntlrQwerty::QwertyParser::ListContext *ctx) {
    std::string ret;
    ret += "std::list< " + visitType(ctx->type()).as<std::string>() + " >";
    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitOperand(AntlrQwerty::QwertyParser::OperandContext *ctx) {
    std::string ret;

    if (ctx->name()) {
        ret += visitName(ctx->name()).as<std::string>();
    } else if (ctx->array()) {
        ret += visitArray(ctx->array()).as<std::string>();
    } else {
        ret += ctx->getText();
    }

    return ret;
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitName(AntlrQwerty::QwertyParser::NameContext *ctx) {
    return ctx->getText();
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitIdent(AntlrQwerty::QwertyParser::IdentContext *ctx) {
    return ctx->getText();
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitArray(AntlrQwerty::QwertyParser::ArrayContext *ctx) {
    std::list<int> l({1, 2, 3});
    std::string ret = "std::list<std::string>({";

    for (unsigned long i = 0; i < ctx->operand().size(); ++i) {
        auto operand = ctx->operand().at(i);
        if ((operand->name() &&
             scopeVariables.findBySecond(visitName(operand->name()).as<std::string>())->first != "str") ||
            !(operand->ident()->STRING())) {
            throw QwertySyntaxException("Wrong value of an array");
        } else {
            ret += visitOperand(operand).as<std::string>();
            if (i < ctx->operand().size() - 1) {
                ret += ", ";
            }
        }
    }

    ret += "})";
    return ret;
}
