
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

  virtual antlrcpp::Any visitFor_instruction(QwertyParser::For_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_instruction(QwertyParser::While_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition_instruction(QwertyParser::Definition_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_instructions(QwertyParser::Assign_instructionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGet_object(QwertyParser::Get_objectContext *ctx) override {
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

  virtual antlrcpp::Any visitType(QwertyParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(QwertyParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(QwertyParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace AntlrQwerty
