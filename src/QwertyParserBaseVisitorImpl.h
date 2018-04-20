#ifndef QWERTY_LANG_QWERTYBASEVISITORIMPL_H
#define QWERTY_LANG_QWERTYBASEVISITORIMPL_H

#include "../gen/QwertyParserBaseVisitor.h"
#include "../gen/QwertyParser.h"

namespace AntlrQwerty {
    class QwertyParserBaseVisitorImpl : public QwertyParserBaseVisitor {
    public:
        QwertyParserBaseVisitorImpl() = default;
        ~QwertyParserBaseVisitorImpl() override = default;

        antlrcpp::Any visitProgram(QwertyParser::ProgramContext *ctx) final;
        antlrcpp::Any visitExpression(QwertyParser::ExpressionContext *ctx) final;
        antlrcpp::Any visitFunction(QwertyParser::FunctionContext *ctx) final;
        antlrcpp::Any visitParam_def(QwertyParser::Param_defContext *ctx) final;
        antlrcpp::Any visitOperators(QwertyParser::OperatorsContext *ctx) final;
        antlrcpp::Any visitInstruction(QwertyParser::InstructionContext *ctx) final;
        antlrcpp::Any visitIf_instruction(QwertyParser::If_instructionContext *ctx) final;
        antlrcpp::Any visitFor_instruction(QwertyParser::For_instructionContext *ctx) final;
        antlrcpp::Any visitWhile_instruction(QwertyParser::While_instructionContext *ctx) final;
        antlrcpp::Any visitDefinition_instruction(QwertyParser::Definition_instructionContext *ctx) final;
        antlrcpp::Any visitAssign_instructions(QwertyParser::Assign_instructionsContext *ctx) final;
        antlrcpp::Any visitGet_object(QwertyParser::Get_objectContext *ctx) final;
        antlrcpp::Any visitPrint(QwertyParser::PrintContext *ctx) final;
        antlrcpp::Any visitReturn_instruction(QwertyParser::Return_instructionContext *ctx) final;
        antlrcpp::Any visitOperation(QwertyParser::OperationContext *ctx) final;
        antlrcpp::Any visitFunction_call(QwertyParser::Function_callContext *ctx) final;
        antlrcpp::Any visitGet_item(QwertyParser::Get_itemContext *ctx) final;
        antlrcpp::Any visitGet_slice(QwertyParser::Get_sliceContext *ctx) final;
        antlrcpp::Any visitParam_list(QwertyParser::Param_listContext *ctx) final;
        antlrcpp::Any visitLen_function(QwertyParser::Len_functionContext *ctx) final;
        antlrcpp::Any visitCondition(QwertyParser::ConditionContext *ctx) final;
        antlrcpp::Any visitLogical_conj(QwertyParser::Logical_conjContext *ctx) final;
        antlrcpp::Any visitLogical_factor(QwertyParser::Logical_factorContext *ctx) final;
    };
}

#endif //QWERTY_LANG_QWERTYBASEVISITORIMPL_H
