#ifndef QWERTY_LANG_QWERTYBASEVISITORIMPL_H
#define QWERTY_LANG_QWERTYBASEVISITORIMPL_H

#include "../gen/QwertyParserBaseVisitor.h"
#include "../gen/QwertyParser.h"
#include "PairSet.h"
#include "QwertySyntaxException.h"

#include <set>
#include <string>

namespace AntlrQwerty {
    using FunctionSet = std::set<std::string>;
    using VariableSet = PairSet<std::string, std::string>;

    class QwertyParserBaseVisitorImpl : public QwertyParserBaseVisitor {
    public:
        QwertyParserBaseVisitorImpl() = default;

        explicit QwertyParserBaseVisitorImpl(const VariableSet &scopeVariables);

        ~QwertyParserBaseVisitorImpl() override = default;

        antlrcpp::Any visitProgram(QwertyParser::ProgramContext *ctx) final;

        antlrcpp::Any visitExpression(QwertyParser::ExpressionContext *ctx) final;

        antlrcpp::Any visitFunction(QwertyParser::FunctionContext *ctx) noexcept(false) final;

        antlrcpp::Any visitParam_def(QwertyParser::Param_defContext *ctx) noexcept(false) final;

        antlrcpp::Any visitOperators(QwertyParser::OperatorsContext *ctx) final;

        antlrcpp::Any visitInstruction(QwertyParser::InstructionContext *ctx) final;

        antlrcpp::Any visitIf_instruction(QwertyParser::If_instructionContext *ctx) final;

        antlrcpp::Any visitThen_block(QwertyParser::Then_blockContext *ctx) final;

        antlrcpp::Any visitElse_block(QwertyParser::Else_blockContext *ctx) final;

        antlrcpp::Any visitFor_instruction(QwertyParser::For_instructionContext *ctx) noexcept(false) final;

        antlrcpp::Any visitWhile_instruction(QwertyParser::While_instructionContext *ctx) final;

        antlrcpp::Any visitDefinition_instruction(QwertyParser::Definition_instructionContext *ctx) final;

        antlrcpp::Any visitAssign_instruction(QwertyParser::Assign_instructionContext *ctx) final;

        antlrcpp::Any visitPrint(QwertyParser::PrintContext *ctx) final;

        antlrcpp::Any visitReturn_instruction(QwertyParser::Return_instructionContext *ctx) final;

        antlrcpp::Any visitOperation(QwertyParser::OperationContext *ctx) final;

        antlrcpp::Any visitFunction_call(QwertyParser::Function_callContext *ctx) final;

        antlrcpp::Any visitGet_item(QwertyParser::Get_itemContext *ctx) final;

        antlrcpp::Any visitGet_slice(QwertyParser::Get_sliceContext *ctx) final;

        antlrcpp::Any visitItem_index1(QwertyParser::Item_index1Context *ctx) final;

        antlrcpp::Any visitItem_index2(QwertyParser::Item_index2Context *ctx) final;

        antlrcpp::Any visitParam_list(QwertyParser::Param_listContext *ctx) final;

        antlrcpp::Any visitLen_function(QwertyParser::Len_functionContext *ctx) final;

        antlrcpp::Any visitCondition(QwertyParser::ConditionContext *ctx) final;

        antlrcpp::Any visitLogical_conj(QwertyParser::Logical_conjContext *ctx) final;

        antlrcpp::Any visitLogical_factor(QwertyParser::Logical_factorContext *ctx) final;

        antlrcpp::Any visitType(QwertyParser::TypeContext *ctx) final;

        antlrcpp::Any visitList(QwertyParser::ListContext *ctx) final;

        antlrcpp::Any visitOperand(QwertyParser::OperandContext *ctx) final;

        antlrcpp::Any visitName(QwertyParser::NameContext *ctx) final;

        antlrcpp::Any visitIdent(QwertyParser::IdentContext *ctx) final;

        antlrcpp::Any visitArray(QwertyParser::ArrayContext *ctx) final;

    private:
        std::string getIterableString(AntlrQwerty::QwertyParser::OperandContext *ctx) noexcept(false);
        std::string simpleAssignTranslation(AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) noexcept(false);
        std::string insertAssignTranslation(AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) noexcept(false);
        std::string replaceAssignTranslation(AntlrQwerty::QwertyParser::Assign_instructionContext *ctx) noexcept(false);

        PairSet<std::string, std::string> scopeVariables{};
        FunctionSet functions;
    };
}

#endif //QWERTY_LANG_QWERTYBASEVISITORIMPL_H
