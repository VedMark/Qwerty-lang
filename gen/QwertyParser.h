
// Generated from QwertyParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace AntlrQwerty {


class  QwertyParser : public antlr4::Parser {
public:
  enum {
    IF = 1, ELSE = 2, FOR = 3, WHILE = 4, END = 5, BOOL = 6, INT = 7, STR = 8, 
    LIST = 9, TRUE = 10, FALSE = 11, NOT = 12, AND = 13, OR = 14, FUNC = 15, 
    RETURN = 16, LEN = 17, IN = 18, EQ = 19, LESS = 20, GREATER = 21, PRINT = 22, 
    SUM = 23, MULT = 24, SUM_ASSIGN = 25, MULT_ASSIGN = 26, ASSIGN = 27, 
    NAME = 28, IDENT = 29, STRING = 30, NUMBER = 31, BOOLEAN = 32, COMMA = 33, 
    OPEN_PARANTHESIS = 34, CLOSE_PARANTHESIS = 35, OPEN_SQUARE_BRACKET = 36, 
    CLOSE_SQUARE_BRACKET = 37, BEGIN = 38, SEP = 39, OPERATOR_DEL = 40, 
    DIGIT = 41, COMMENT = 42, WS = 43
  };

  enum {
    RuleProgram = 0, RuleExpression = 1, RuleFunction = 2, RuleParam_def = 3, 
    RuleOperators = 4, RuleInstruction = 5, RuleIf_instruction = 6, RuleFor_instruction = 7, 
    RuleWhile_instruction = 8, RuleDefinition_instruction = 9, RuleAssign_instructions = 10, 
    RuleGet_object = 11, RulePrint = 12, RuleReturn_instruction = 13, RuleOperation = 14, 
    RuleFunction_call = 15, RuleGet_item = 16, RuleGet_slice = 17, RuleParam_list = 18, 
    RuleLen_function = 19, RuleCondition = 20, RuleLogical_conj = 21, RuleLogical_factor = 22, 
    RuleType = 23, RuleOperand = 24, RuleName = 25
  };

  QwertyParser(antlr4::TokenStream *input);
  ~QwertyParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class ExpressionContext;
  class FunctionContext;
  class Param_defContext;
  class OperatorsContext;
  class InstructionContext;
  class If_instructionContext;
  class For_instructionContext;
  class While_instructionContext;
  class Definition_instructionContext;
  class Assign_instructionsContext;
  class Get_objectContext;
  class PrintContext;
  class Return_instructionContext;
  class OperationContext;
  class Function_callContext;
  class Get_itemContext;
  class Get_sliceContext;
  class Param_listContext;
  class Len_functionContext;
  class ConditionContext;
  class Logical_conjContext;
  class Logical_factorContext;
  class TypeContext;
  class OperandContext;
  class NameContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPERATOR_DEL();
    antlr4::tree::TerminalNode* OPERATOR_DEL(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    InstructionContext *instruction();
    OperationContext *operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    NameContext *name();
    antlr4::tree::TerminalNode *OPEN_PARANTHESIS();
    Param_defContext *param_def();
    antlr4::tree::TerminalNode *CLOSE_PARANTHESIS();
    antlr4::tree::TerminalNode *BEGIN();
    OperatorsContext *operators();
    antlr4::tree::TerminalNode *END();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  Param_defContext : public antlr4::ParserRuleContext {
  public:
    Param_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_defContext* param_def();

  class  OperatorsContext : public antlr4::ParserRuleContext {
  public:
    OperatorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPERATOR_DEL();
    antlr4::tree::TerminalNode* OPERATOR_DEL(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorsContext* operators();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_instructionContext *if_instruction();
    For_instructionContext *for_instruction();
    While_instructionContext *while_instruction();
    Definition_instructionContext *definition_instruction();
    Assign_instructionsContext *assign_instructions();
    PrintContext *print();
    Return_instructionContext *return_instruction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  If_instructionContext : public antlr4::ParserRuleContext {
  public:
    If_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ConditionContext *condition();
    std::vector<antlr4::tree::TerminalNode *> BEGIN();
    antlr4::tree::TerminalNode* BEGIN(size_t i);
    std::vector<OperatorsContext *> operators();
    OperatorsContext* operators(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_instructionContext* if_instruction();

  class  For_instructionContext : public antlr4::ParserRuleContext {
  public:
    For_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NameContext *name();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *BEGIN();
    OperatorsContext *operators();
    antlr4::tree::TerminalNode *END();
    OperandContext *operand();
    OperationContext *operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_instructionContext* for_instruction();

  class  While_instructionContext : public antlr4::ParserRuleContext {
  public:
    While_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *BEGIN();
    OperatorsContext *operators();
    antlr4::tree::TerminalNode *END();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_instructionContext* while_instruction();

  class  Definition_instructionContext : public antlr4::ParserRuleContext {
  public:
    Definition_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    NameContext *name();
    antlr4::tree::TerminalNode *ASSIGN();
    OperationContext *operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_instructionContext* definition_instruction();

  class  Assign_instructionsContext : public antlr4::ParserRuleContext {
  public:
    Assign_instructionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Get_objectContext *get_object();
    antlr4::tree::TerminalNode *ASSIGN();
    OperationContext *operation();
    antlr4::tree::TerminalNode *MULT_ASSIGN();
    antlr4::tree::TerminalNode *SUM_ASSIGN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_instructionsContext* assign_instructions();

  class  Get_objectContext : public antlr4::ParserRuleContext {
  public:
    Get_objectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Get_sliceContext *get_slice();
    Get_itemContext *get_item();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_objectContext* get_object();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    Param_listContext *param_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  Return_instructionContext : public antlr4::ParserRuleContext {
  public:
    Return_instructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    OperationContext *operation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_instructionContext* return_instruction();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    Get_itemContext *get_item();
    Get_sliceContext *get_slice();
    Len_functionContext *len_function();
    OperandContext *operand();
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperationContext* operation();
  OperationContext* operation(int precedence);
  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *OPEN_PARANTHESIS();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CLOSE_PARANTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Get_itemContext : public antlr4::ParserRuleContext {
  public:
    Get_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperandContext *operand();
    antlr4::tree::TerminalNode *OPEN_SQUARE_BRACKET();
    OperationContext *operation();
    antlr4::tree::TerminalNode *CLOSE_SQUARE_BRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_itemContext* get_item();

  class  Get_sliceContext : public antlr4::ParserRuleContext {
  public:
    Get_sliceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperandContext *operand();
    antlr4::tree::TerminalNode *OPEN_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *CLOSE_SQUARE_BRACKET();
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_sliceContext* get_slice();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  Len_functionContext : public antlr4::ParserRuleContext {
  public:
    Len_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *OPEN_PARANTHESIS();
    OperationContext *operation();
    antlr4::tree::TerminalNode *CLOSE_PARANTHESIS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Len_functionContext* len_function();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARANTHESIS();
    std::vector<Logical_conjContext *> logical_conj();
    Logical_conjContext* logical_conj(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARANTHESIS();
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  Logical_conjContext : public antlr4::ParserRuleContext {
  public:
    Logical_conjContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARANTHESIS();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *CLOSE_PARANTHESIS();
    std::vector<Logical_factorContext *> logical_factor();
    Logical_factorContext* logical_factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_conjContext* logical_conj();

  class  Logical_factorContext : public antlr4::ParserRuleContext {
  public:
    Logical_factorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARANTHESIS();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *CLOSE_PARANTHESIS();
    OperationContext *operation();
    antlr4::tree::TerminalNode *NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_factorContext* logical_factor();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *LIST();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *IDENT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool operationSempred(OperationContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace AntlrQwerty
