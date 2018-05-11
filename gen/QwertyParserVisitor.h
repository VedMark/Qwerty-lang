
// Generated from QwertyParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "QwertyParser.h"


namespace AntlrQwerty {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by QwertyParser.
 */
class  QwertyParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by QwertyParser.
   */
    virtual antlrcpp::Any visitProgram(QwertyParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitExpression(QwertyParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunction(QwertyParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitParam_def(QwertyParser::Param_defContext *context) = 0;

    virtual antlrcpp::Any visitOperators(QwertyParser::OperatorsContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(QwertyParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitIf_instruction(QwertyParser::If_instructionContext *context) = 0;

    virtual antlrcpp::Any visitThen_block(QwertyParser::Then_blockContext *context) = 0;

    virtual antlrcpp::Any visitElse_block(QwertyParser::Else_blockContext *context) = 0;

    virtual antlrcpp::Any visitFor_instruction(QwertyParser::For_instructionContext *context) = 0;

    virtual antlrcpp::Any visitWhile_instruction(QwertyParser::While_instructionContext *context) = 0;

    virtual antlrcpp::Any visitDefinition_instruction(QwertyParser::Definition_instructionContext *context) = 0;

    virtual antlrcpp::Any visitAssign_instruction(QwertyParser::Assign_instructionContext *context) = 0;

    virtual antlrcpp::Any visitPrint(QwertyParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitReturn_instruction(QwertyParser::Return_instructionContext *context) = 0;

    virtual antlrcpp::Any visitOperation(QwertyParser::OperationContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(QwertyParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitGet_item(QwertyParser::Get_itemContext *context) = 0;

    virtual antlrcpp::Any visitGet_slice(QwertyParser::Get_sliceContext *context) = 0;

    virtual antlrcpp::Any visitItem_index1(QwertyParser::Item_index1Context *context) = 0;

    virtual antlrcpp::Any visitItem_index2(QwertyParser::Item_index2Context *context) = 0;

    virtual antlrcpp::Any visitParam_list(QwertyParser::Param_listContext *context) = 0;

    virtual antlrcpp::Any visitLen_function(QwertyParser::Len_functionContext *context) = 0;

    virtual antlrcpp::Any visitCondition(QwertyParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitLogical_conj(QwertyParser::Logical_conjContext *context) = 0;

    virtual antlrcpp::Any visitLogical_factor(QwertyParser::Logical_factorContext *context) = 0;

    virtual antlrcpp::Any visitNegation(QwertyParser::NegationContext *context) = 0;

    virtual antlrcpp::Any visitType(QwertyParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitList(QwertyParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitOperand(QwertyParser::OperandContext *context) = 0;

    virtual antlrcpp::Any visitName(QwertyParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitIdent(QwertyParser::IdentContext *context) = 0;

    virtual antlrcpp::Any visitArray(QwertyParser::ArrayContext *context) = 0;


};

}  // namespace AntlrQwerty
