
// Generated from QwertyParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "QwertyParserVisitor.h"


namespace AntlrQwerty {

/**
 * This class provides an empty implementation of QwertyParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  QwertyParserBaseVisitor : public QwertyParserVisitor {
public:

  virtual antlrcpp::Any visitProgram(QwertyParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(QwertyParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(QwertyParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_def(QwertyParser::Param_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperators(QwertyParser::OperatorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(QwertyParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_instruction(QwertyParser::If_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThen_block(QwertyParser::Then_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_block(QwertyParser::Else_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_instruction(QwertyParser::For_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_instruction(QwertyParser::While_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_instruction(QwertyParser::Definition_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_instruction(QwertyParser::Assign_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(QwertyParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_instruction(QwertyParser::Return_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperation(QwertyParser::OperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(QwertyParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_item(QwertyParser::Get_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_slice(QwertyParser::Get_sliceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitItem_index1(QwertyParser::Item_index1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitItem_index2(QwertyParser::Item_index2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam_list(QwertyParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLen_function(QwertyParser::Len_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(QwertyParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_conj(QwertyParser::Logical_conjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_factor(QwertyParser::Logical_factorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegation(QwertyParser::NegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(QwertyParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(QwertyParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(QwertyParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(QwertyParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent(QwertyParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(QwertyParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace AntlrQwerty
