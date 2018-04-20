#include "QwertyParserBaseVisitorImpl.h"

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitProgram(AntlrQwerty::QwertyParser::ProgramContext *ctx) {
    return std::string("hello");
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitExpression(AntlrQwerty::QwertyParser::ExpressionContext *ctx) {
    return QwertyParserBaseVisitor::visitExpression(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitFunction(AntlrQwerty::QwertyParser::FunctionContext *ctx) {
    return QwertyParserBaseVisitor::visitFunction(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitParam_def(AntlrQwerty::QwertyParser::Param_defContext *ctx) {
    return QwertyParserBaseVisitor::visitParam_def(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitOperators(AntlrQwerty::QwertyParser::OperatorsContext *ctx) {
    return QwertyParserBaseVisitor::visitOperators(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitInstruction(AntlrQwerty::QwertyParser::InstructionContext *ctx) {
    return QwertyParserBaseVisitor::visitInstruction(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitIf_instruction(AntlrQwerty::QwertyParser::If_instructionContext *ctx) {
    return QwertyParserBaseVisitor::visitIf_instruction(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitFor_instruction(AntlrQwerty::QwertyParser::For_instructionContext *ctx) {
    return QwertyParserBaseVisitor::visitFor_instruction(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitWhile_instruction(
        AntlrQwerty::QwertyParser::While_instructionContext *ctx) {
    return QwertyParserBaseVisitor::visitWhile_instruction(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitDefinition_instruction(
        AntlrQwerty::QwertyParser::Definition_instructionContext *ctx) {
    return QwertyParserBaseVisitor::visitDefinition_instruction(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitAssign_instructions(
        AntlrQwerty::QwertyParser::Assign_instructionsContext *ctx) {
    return QwertyParserBaseVisitor::visitAssign_instructions(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitGet_object(AntlrQwerty::QwertyParser::Get_objectContext *ctx) {
    return QwertyParserBaseVisitor::visitGet_object(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitPrint(AntlrQwerty::QwertyParser::PrintContext *ctx) {
    return QwertyParserBaseVisitor::visitPrint(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitReturn_instruction(
        AntlrQwerty::QwertyParser::Return_instructionContext *ctx) {
    return QwertyParserBaseVisitor::visitReturn_instruction(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitOperation(AntlrQwerty::QwertyParser::OperationContext *ctx) {
    return QwertyParserBaseVisitor::visitOperation(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitFunction_call(AntlrQwerty::QwertyParser::Function_callContext *ctx) {
    return QwertyParserBaseVisitor::visitFunction_call(ctx);
}

antlrcpp::Any AntlrQwerty::QwertyParserBaseVisitorImpl::visitGet_item(AntlrQwerty::QwertyParser::Get_itemContext *ctx) {
    return QwertyParserBaseVisitor::visitGet_item(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitGet_slice(AntlrQwerty::QwertyParser::Get_sliceContext *ctx) {
    return QwertyParserBaseVisitor::visitGet_slice(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitParam_list(AntlrQwerty::QwertyParser::Param_listContext *ctx) {
    return QwertyParserBaseVisitor::visitParam_list(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitLen_function(AntlrQwerty::QwertyParser::Len_functionContext *ctx) {
    return QwertyParserBaseVisitor::visitLen_function(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitCondition(AntlrQwerty::QwertyParser::ConditionContext *ctx) {
    return QwertyParserBaseVisitor::visitCondition(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitLogical_conj(AntlrQwerty::QwertyParser::Logical_conjContext *ctx) {
    return QwertyParserBaseVisitor::visitLogical_conj(ctx);
}

antlrcpp::Any
AntlrQwerty::QwertyParserBaseVisitorImpl::visitLogical_factor(AntlrQwerty::QwertyParser::Logical_factorContext *ctx) {
    return QwertyParserBaseVisitor::visitLogical_factor(ctx);
}
