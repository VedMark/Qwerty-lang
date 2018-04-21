
// Generated from QwertyParser.g4 by ANTLR 4.7.1


#include "QwertyParserVisitor.h"

#include "QwertyParser.h"


using namespace antlrcpp;
using namespace AntlrQwerty;
using namespace antlr4;

QwertyParser::QwertyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

QwertyParser::~QwertyParser() {
  delete _interpreter;
}

std::string QwertyParser::getGrammarFileName() const {
  return "QwertyParser.g4";
}

const std::vector<std::string>& QwertyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& QwertyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

QwertyParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<QwertyParser::ExpressionContext *> QwertyParser::ProgramContext::expression() {
  return getRuleContexts<QwertyParser::ExpressionContext>();
}

QwertyParser::ExpressionContext* QwertyParser::ProgramContext::expression(size_t i) {
  return getRuleContext<QwertyParser::ExpressionContext>(i);
}

std::vector<QwertyParser::FunctionContext *> QwertyParser::ProgramContext::function() {
  return getRuleContexts<QwertyParser::FunctionContext>();
}

QwertyParser::FunctionContext* QwertyParser::ProgramContext::function(size_t i) {
  return getRuleContext<QwertyParser::FunctionContext>(i);
}

std::vector<tree::TerminalNode *> QwertyParser::ProgramContext::OPERATOR_DEL() {
  return getTokens(QwertyParser::OPERATOR_DEL);
}

tree::TerminalNode* QwertyParser::ProgramContext::OPERATOR_DEL(size_t i) {
  return getToken(QwertyParser::OPERATOR_DEL, i);
}


size_t QwertyParser::ProgramContext::getRuleIndex() const {
  return QwertyParser::RuleProgram;
}

antlrcpp::Any QwertyParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::ProgramContext* QwertyParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, QwertyParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case QwertyParser::IF:
      case QwertyParser::FOR:
      case QwertyParser::WHILE:
      case QwertyParser::BOOL:
      case QwertyParser::INT:
      case QwertyParser::STR:
      case QwertyParser::LIST:
      case QwertyParser::FUNC:
      case QwertyParser::RETURN:
      case QwertyParser::LEN:
      case QwertyParser::PRINT:
      case QwertyParser::NAME:
      case QwertyParser::IDENT:
      case QwertyParser::OPERATOR_DEL: {
        enterOuterAlt(_localctx, 1);
        setState(55);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == QwertyParser::OPERATOR_DEL) {
          setState(52);
          match(QwertyParser::OPERATOR_DEL);
          setState(57);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(66);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(60);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case QwertyParser::IF:
              case QwertyParser::FOR:
              case QwertyParser::WHILE:
              case QwertyParser::BOOL:
              case QwertyParser::INT:
              case QwertyParser::STR:
              case QwertyParser::LIST:
              case QwertyParser::RETURN:
              case QwertyParser::LEN:
              case QwertyParser::PRINT:
              case QwertyParser::NAME:
              case QwertyParser::IDENT: {
                setState(58);
                expression();
                break;
              }

              case QwertyParser::FUNC: {
                setState(59);
                function();
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            setState(62);
            match(QwertyParser::OPERATOR_DEL); 
          }
          setState(68);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
        }
        setState(71);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case QwertyParser::IF:
          case QwertyParser::FOR:
          case QwertyParser::WHILE:
          case QwertyParser::BOOL:
          case QwertyParser::INT:
          case QwertyParser::STR:
          case QwertyParser::LIST:
          case QwertyParser::RETURN:
          case QwertyParser::LEN:
          case QwertyParser::PRINT:
          case QwertyParser::NAME:
          case QwertyParser::IDENT: {
            setState(69);
            expression();
            break;
          }

          case QwertyParser::FUNC: {
            setState(70);
            function();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(76);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == QwertyParser::OPERATOR_DEL) {
          setState(73);
          match(QwertyParser::OPERATOR_DEL);
          setState(78);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case QwertyParser::EOF: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

QwertyParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::InstructionContext* QwertyParser::ExpressionContext::instruction() {
  return getRuleContext<QwertyParser::InstructionContext>(0);
}

QwertyParser::OperationContext* QwertyParser::ExpressionContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}


size_t QwertyParser::ExpressionContext::getRuleIndex() const {
  return QwertyParser::RuleExpression;
}

antlrcpp::Any QwertyParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::ExpressionContext* QwertyParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, QwertyParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      instruction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      operation(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

QwertyParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::FunctionContext::FUNC() {
  return getToken(QwertyParser::FUNC, 0);
}

QwertyParser::NameContext* QwertyParser::FunctionContext::name() {
  return getRuleContext<QwertyParser::NameContext>(0);
}

tree::TerminalNode* QwertyParser::FunctionContext::OPEN_PARANTHESIS() {
  return getToken(QwertyParser::OPEN_PARANTHESIS, 0);
}

QwertyParser::Param_defContext* QwertyParser::FunctionContext::param_def() {
  return getRuleContext<QwertyParser::Param_defContext>(0);
}

tree::TerminalNode* QwertyParser::FunctionContext::CLOSE_PARANTHESIS() {
  return getToken(QwertyParser::CLOSE_PARANTHESIS, 0);
}

tree::TerminalNode* QwertyParser::FunctionContext::BEGIN() {
  return getToken(QwertyParser::BEGIN, 0);
}

QwertyParser::OperatorsContext* QwertyParser::FunctionContext::operators() {
  return getRuleContext<QwertyParser::OperatorsContext>(0);
}

tree::TerminalNode* QwertyParser::FunctionContext::END() {
  return getToken(QwertyParser::END, 0);
}


size_t QwertyParser::FunctionContext::getRuleIndex() const {
  return QwertyParser::RuleFunction;
}

antlrcpp::Any QwertyParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::FunctionContext* QwertyParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, QwertyParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(QwertyParser::FUNC);
    setState(87);
    name();
    setState(88);
    match(QwertyParser::OPEN_PARANTHESIS);
    setState(89);
    param_def();
    setState(90);
    match(QwertyParser::CLOSE_PARANTHESIS);
    setState(91);
    match(QwertyParser::BEGIN);
    setState(92);
    operators();
    setState(93);
    match(QwertyParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_defContext ------------------------------------------------------------------

QwertyParser::Param_defContext::Param_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<QwertyParser::TypeContext *> QwertyParser::Param_defContext::type() {
  return getRuleContexts<QwertyParser::TypeContext>();
}

QwertyParser::TypeContext* QwertyParser::Param_defContext::type(size_t i) {
  return getRuleContext<QwertyParser::TypeContext>(i);
}

std::vector<QwertyParser::NameContext *> QwertyParser::Param_defContext::name() {
  return getRuleContexts<QwertyParser::NameContext>();
}

QwertyParser::NameContext* QwertyParser::Param_defContext::name(size_t i) {
  return getRuleContext<QwertyParser::NameContext>(i);
}

std::vector<tree::TerminalNode *> QwertyParser::Param_defContext::COMMA() {
  return getTokens(QwertyParser::COMMA);
}

tree::TerminalNode* QwertyParser::Param_defContext::COMMA(size_t i) {
  return getToken(QwertyParser::COMMA, i);
}


size_t QwertyParser::Param_defContext::getRuleIndex() const {
  return QwertyParser::RuleParam_def;
}

antlrcpp::Any QwertyParser::Param_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitParam_def(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Param_defContext* QwertyParser::param_def() {
  Param_defContext *_localctx = _tracker.createInstance<Param_defContext>(_ctx, getState());
  enterRule(_localctx, 6, QwertyParser::RuleParam_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << QwertyParser::BOOL)
      | (1ULL << QwertyParser::INT)
      | (1ULL << QwertyParser::STR)
      | (1ULL << QwertyParser::LIST))) != 0)) {
      setState(95);
      type();
      setState(96);
      name();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == QwertyParser::COMMA) {
        setState(97);
        match(QwertyParser::COMMA);
        setState(98);
        type();
        setState(99);
        name();
        setState(105);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorsContext ------------------------------------------------------------------

QwertyParser::OperatorsContext::OperatorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> QwertyParser::OperatorsContext::OPERATOR_DEL() {
  return getTokens(QwertyParser::OPERATOR_DEL);
}

tree::TerminalNode* QwertyParser::OperatorsContext::OPERATOR_DEL(size_t i) {
  return getToken(QwertyParser::OPERATOR_DEL, i);
}

std::vector<QwertyParser::InstructionContext *> QwertyParser::OperatorsContext::instruction() {
  return getRuleContexts<QwertyParser::InstructionContext>();
}

QwertyParser::InstructionContext* QwertyParser::OperatorsContext::instruction(size_t i) {
  return getRuleContext<QwertyParser::InstructionContext>(i);
}

std::vector<QwertyParser::OperationContext *> QwertyParser::OperatorsContext::operation() {
  return getRuleContexts<QwertyParser::OperationContext>();
}

QwertyParser::OperationContext* QwertyParser::OperatorsContext::operation(size_t i) {
  return getRuleContext<QwertyParser::OperationContext>(i);
}


size_t QwertyParser::OperatorsContext::getRuleIndex() const {
  return QwertyParser::RuleOperators;
}

antlrcpp::Any QwertyParser::OperatorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitOperators(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::OperatorsContext* QwertyParser::operators() {
  OperatorsContext *_localctx = _tracker.createInstance<OperatorsContext>(_ctx, getState());
  enterRule(_localctx, 8, QwertyParser::RuleOperators);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(116);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(110);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(108);
          instruction();
          break;
        }

        case 2: {
          setState(109);
          operation(0);
          break;
        }

        }
        setState(112);
        match(QwertyParser::OPERATOR_DEL); 
      }
      setState(118);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(121);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(119);
      instruction();
      break;
    }

    case 2: {
      setState(120);
      operation(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

QwertyParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::If_instructionContext* QwertyParser::InstructionContext::if_instruction() {
  return getRuleContext<QwertyParser::If_instructionContext>(0);
}

QwertyParser::For_instructionContext* QwertyParser::InstructionContext::for_instruction() {
  return getRuleContext<QwertyParser::For_instructionContext>(0);
}

QwertyParser::While_instructionContext* QwertyParser::InstructionContext::while_instruction() {
  return getRuleContext<QwertyParser::While_instructionContext>(0);
}

QwertyParser::Definition_instructionContext* QwertyParser::InstructionContext::definition_instruction() {
  return getRuleContext<QwertyParser::Definition_instructionContext>(0);
}

QwertyParser::Assign_instructionsContext* QwertyParser::InstructionContext::assign_instructions() {
  return getRuleContext<QwertyParser::Assign_instructionsContext>(0);
}

QwertyParser::PrintContext* QwertyParser::InstructionContext::print() {
  return getRuleContext<QwertyParser::PrintContext>(0);
}

QwertyParser::Return_instructionContext* QwertyParser::InstructionContext::return_instruction() {
  return getRuleContext<QwertyParser::Return_instructionContext>(0);
}


size_t QwertyParser::InstructionContext::getRuleIndex() const {
  return QwertyParser::RuleInstruction;
}

antlrcpp::Any QwertyParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::InstructionContext* QwertyParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 10, QwertyParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case QwertyParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(123);
        if_instruction();
        break;
      }

      case QwertyParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(124);
        for_instruction();
        break;
      }

      case QwertyParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(125);
        while_instruction();
        break;
      }

      case QwertyParser::BOOL:
      case QwertyParser::INT:
      case QwertyParser::STR:
      case QwertyParser::LIST: {
        enterOuterAlt(_localctx, 4);
        setState(126);
        definition_instruction();
        break;
      }

      case QwertyParser::NAME:
      case QwertyParser::IDENT: {
        enterOuterAlt(_localctx, 5);
        setState(127);
        assign_instructions();
        break;
      }

      case QwertyParser::PRINT: {
        enterOuterAlt(_localctx, 6);
        setState(128);
        print();
        break;
      }

      case QwertyParser::RETURN: {
        enterOuterAlt(_localctx, 7);
        setState(129);
        return_instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_instructionContext ------------------------------------------------------------------

QwertyParser::If_instructionContext::If_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::If_instructionContext::IF() {
  return getToken(QwertyParser::IF, 0);
}

QwertyParser::ConditionContext* QwertyParser::If_instructionContext::condition() {
  return getRuleContext<QwertyParser::ConditionContext>(0);
}

std::vector<tree::TerminalNode *> QwertyParser::If_instructionContext::BEGIN() {
  return getTokens(QwertyParser::BEGIN);
}

tree::TerminalNode* QwertyParser::If_instructionContext::BEGIN(size_t i) {
  return getToken(QwertyParser::BEGIN, i);
}

std::vector<QwertyParser::OperatorsContext *> QwertyParser::If_instructionContext::operators() {
  return getRuleContexts<QwertyParser::OperatorsContext>();
}

QwertyParser::OperatorsContext* QwertyParser::If_instructionContext::operators(size_t i) {
  return getRuleContext<QwertyParser::OperatorsContext>(i);
}

tree::TerminalNode* QwertyParser::If_instructionContext::END() {
  return getToken(QwertyParser::END, 0);
}

tree::TerminalNode* QwertyParser::If_instructionContext::ELSE() {
  return getToken(QwertyParser::ELSE, 0);
}


size_t QwertyParser::If_instructionContext::getRuleIndex() const {
  return QwertyParser::RuleIf_instruction;
}

antlrcpp::Any QwertyParser::If_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitIf_instruction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::If_instructionContext* QwertyParser::if_instruction() {
  If_instructionContext *_localctx = _tracker.createInstance<If_instructionContext>(_ctx, getState());
  enterRule(_localctx, 12, QwertyParser::RuleIf_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(QwertyParser::IF);
    setState(133);
    condition();
    setState(134);
    match(QwertyParser::BEGIN);
    setState(135);
    operators();
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == QwertyParser::ELSE) {
      setState(136);
      match(QwertyParser::ELSE);
      setState(137);
      match(QwertyParser::BEGIN);
      setState(138);
      operators();
    }
    setState(141);
    match(QwertyParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_instructionContext ------------------------------------------------------------------

QwertyParser::For_instructionContext::For_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::For_instructionContext::FOR() {
  return getToken(QwertyParser::FOR, 0);
}

QwertyParser::NameContext* QwertyParser::For_instructionContext::name() {
  return getRuleContext<QwertyParser::NameContext>(0);
}

tree::TerminalNode* QwertyParser::For_instructionContext::COMMA() {
  return getToken(QwertyParser::COMMA, 0);
}

tree::TerminalNode* QwertyParser::For_instructionContext::BEGIN() {
  return getToken(QwertyParser::BEGIN, 0);
}

QwertyParser::OperatorsContext* QwertyParser::For_instructionContext::operators() {
  return getRuleContext<QwertyParser::OperatorsContext>(0);
}

tree::TerminalNode* QwertyParser::For_instructionContext::END() {
  return getToken(QwertyParser::END, 0);
}

QwertyParser::OperandContext* QwertyParser::For_instructionContext::operand() {
  return getRuleContext<QwertyParser::OperandContext>(0);
}

QwertyParser::OperationContext* QwertyParser::For_instructionContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}


size_t QwertyParser::For_instructionContext::getRuleIndex() const {
  return QwertyParser::RuleFor_instruction;
}

antlrcpp::Any QwertyParser::For_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitFor_instruction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::For_instructionContext* QwertyParser::for_instruction() {
  For_instructionContext *_localctx = _tracker.createInstance<For_instructionContext>(_ctx, getState());
  enterRule(_localctx, 14, QwertyParser::RuleFor_instruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(QwertyParser::FOR);
    setState(144);
    name();
    setState(145);
    match(QwertyParser::COMMA);
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(146);
      operand();
      break;
    }

    case 2: {
      setState(147);
      operation(0);
      break;
    }

    }
    setState(150);
    match(QwertyParser::BEGIN);
    setState(151);
    operators();
    setState(152);
    match(QwertyParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_instructionContext ------------------------------------------------------------------

QwertyParser::While_instructionContext::While_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::While_instructionContext::WHILE() {
  return getToken(QwertyParser::WHILE, 0);
}

QwertyParser::ConditionContext* QwertyParser::While_instructionContext::condition() {
  return getRuleContext<QwertyParser::ConditionContext>(0);
}

tree::TerminalNode* QwertyParser::While_instructionContext::BEGIN() {
  return getToken(QwertyParser::BEGIN, 0);
}

QwertyParser::OperatorsContext* QwertyParser::While_instructionContext::operators() {
  return getRuleContext<QwertyParser::OperatorsContext>(0);
}

tree::TerminalNode* QwertyParser::While_instructionContext::END() {
  return getToken(QwertyParser::END, 0);
}


size_t QwertyParser::While_instructionContext::getRuleIndex() const {
  return QwertyParser::RuleWhile_instruction;
}

antlrcpp::Any QwertyParser::While_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitWhile_instruction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::While_instructionContext* QwertyParser::while_instruction() {
  While_instructionContext *_localctx = _tracker.createInstance<While_instructionContext>(_ctx, getState());
  enterRule(_localctx, 16, QwertyParser::RuleWhile_instruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(QwertyParser::WHILE);
    setState(155);
    condition();
    setState(156);
    match(QwertyParser::BEGIN);
    setState(157);
    operators();
    setState(158);
    match(QwertyParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Definition_instructionContext ------------------------------------------------------------------

QwertyParser::Definition_instructionContext::Definition_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::TypeContext* QwertyParser::Definition_instructionContext::type() {
  return getRuleContext<QwertyParser::TypeContext>(0);
}

QwertyParser::NameContext* QwertyParser::Definition_instructionContext::name() {
  return getRuleContext<QwertyParser::NameContext>(0);
}

tree::TerminalNode* QwertyParser::Definition_instructionContext::ASSIGN() {
  return getToken(QwertyParser::ASSIGN, 0);
}

QwertyParser::OperationContext* QwertyParser::Definition_instructionContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}


size_t QwertyParser::Definition_instructionContext::getRuleIndex() const {
  return QwertyParser::RuleDefinition_instruction;
}

antlrcpp::Any QwertyParser::Definition_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitDefinition_instruction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Definition_instructionContext* QwertyParser::definition_instruction() {
  Definition_instructionContext *_localctx = _tracker.createInstance<Definition_instructionContext>(_ctx, getState());
  enterRule(_localctx, 18, QwertyParser::RuleDefinition_instruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    type();
    setState(161);
    name();
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == QwertyParser::ASSIGN) {
      setState(162);
      match(QwertyParser::ASSIGN);
      setState(163);
      operation(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_instructionsContext ------------------------------------------------------------------

QwertyParser::Assign_instructionsContext::Assign_instructionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::Get_objectContext* QwertyParser::Assign_instructionsContext::get_object() {
  return getRuleContext<QwertyParser::Get_objectContext>(0);
}

tree::TerminalNode* QwertyParser::Assign_instructionsContext::ASSIGN() {
  return getToken(QwertyParser::ASSIGN, 0);
}

QwertyParser::OperationContext* QwertyParser::Assign_instructionsContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}

tree::TerminalNode* QwertyParser::Assign_instructionsContext::MULT_ASSIGN() {
  return getToken(QwertyParser::MULT_ASSIGN, 0);
}

tree::TerminalNode* QwertyParser::Assign_instructionsContext::SUM_ASSIGN() {
  return getToken(QwertyParser::SUM_ASSIGN, 0);
}


size_t QwertyParser::Assign_instructionsContext::getRuleIndex() const {
  return QwertyParser::RuleAssign_instructions;
}

antlrcpp::Any QwertyParser::Assign_instructionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitAssign_instructions(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Assign_instructionsContext* QwertyParser::assign_instructions() {
  Assign_instructionsContext *_localctx = _tracker.createInstance<Assign_instructionsContext>(_ctx, getState());
  enterRule(_localctx, 20, QwertyParser::RuleAssign_instructions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(166);
      get_object();
      setState(167);
      match(QwertyParser::ASSIGN);
      setState(168);
      operation(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(170);
      get_object();
      setState(171);
      match(QwertyParser::MULT_ASSIGN);
      setState(172);
      operation(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(174);
      get_object();
      setState(175);
      match(QwertyParser::SUM_ASSIGN);
      setState(176);
      operation(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_objectContext ------------------------------------------------------------------

QwertyParser::Get_objectContext::Get_objectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::NameContext* QwertyParser::Get_objectContext::name() {
  return getRuleContext<QwertyParser::NameContext>(0);
}

QwertyParser::Get_sliceContext* QwertyParser::Get_objectContext::get_slice() {
  return getRuleContext<QwertyParser::Get_sliceContext>(0);
}

QwertyParser::Get_itemContext* QwertyParser::Get_objectContext::get_item() {
  return getRuleContext<QwertyParser::Get_itemContext>(0);
}


size_t QwertyParser::Get_objectContext::getRuleIndex() const {
  return QwertyParser::RuleGet_object;
}

antlrcpp::Any QwertyParser::Get_objectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitGet_object(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Get_objectContext* QwertyParser::get_object() {
  Get_objectContext *_localctx = _tracker.createInstance<Get_objectContext>(_ctx, getState());
  enterRule(_localctx, 22, QwertyParser::RuleGet_object);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(180);
      name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      get_slice();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(182);
      get_item();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

QwertyParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::PrintContext::PRINT() {
  return getToken(QwertyParser::PRINT, 0);
}

QwertyParser::Param_listContext* QwertyParser::PrintContext::param_list() {
  return getRuleContext<QwertyParser::Param_listContext>(0);
}


size_t QwertyParser::PrintContext::getRuleIndex() const {
  return QwertyParser::RulePrint;
}

antlrcpp::Any QwertyParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::PrintContext* QwertyParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 24, QwertyParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(QwertyParser::PRINT);
    setState(186);
    param_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_instructionContext ------------------------------------------------------------------

QwertyParser::Return_instructionContext::Return_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::Return_instructionContext::RETURN() {
  return getToken(QwertyParser::RETURN, 0);
}

QwertyParser::OperationContext* QwertyParser::Return_instructionContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}


size_t QwertyParser::Return_instructionContext::getRuleIndex() const {
  return QwertyParser::RuleReturn_instruction;
}

antlrcpp::Any QwertyParser::Return_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitReturn_instruction(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Return_instructionContext* QwertyParser::return_instruction() {
  Return_instructionContext *_localctx = _tracker.createInstance<Return_instructionContext>(_ctx, getState());
  enterRule(_localctx, 26, QwertyParser::RuleReturn_instruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(QwertyParser::RETURN);
    setState(189);
    operation(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

QwertyParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::Function_callContext* QwertyParser::OperationContext::function_call() {
  return getRuleContext<QwertyParser::Function_callContext>(0);
}

QwertyParser::Get_itemContext* QwertyParser::OperationContext::get_item() {
  return getRuleContext<QwertyParser::Get_itemContext>(0);
}

QwertyParser::Get_sliceContext* QwertyParser::OperationContext::get_slice() {
  return getRuleContext<QwertyParser::Get_sliceContext>(0);
}

QwertyParser::Len_functionContext* QwertyParser::OperationContext::len_function() {
  return getRuleContext<QwertyParser::Len_functionContext>(0);
}

QwertyParser::OperandContext* QwertyParser::OperationContext::operand() {
  return getRuleContext<QwertyParser::OperandContext>(0);
}

std::vector<QwertyParser::OperationContext *> QwertyParser::OperationContext::operation() {
  return getRuleContexts<QwertyParser::OperationContext>();
}

QwertyParser::OperationContext* QwertyParser::OperationContext::operation(size_t i) {
  return getRuleContext<QwertyParser::OperationContext>(i);
}

tree::TerminalNode* QwertyParser::OperationContext::SUM() {
  return getToken(QwertyParser::SUM, 0);
}

tree::TerminalNode* QwertyParser::OperationContext::MULT() {
  return getToken(QwertyParser::MULT, 0);
}

tree::TerminalNode* QwertyParser::OperationContext::IN() {
  return getToken(QwertyParser::IN, 0);
}

tree::TerminalNode* QwertyParser::OperationContext::EQ() {
  return getToken(QwertyParser::EQ, 0);
}

tree::TerminalNode* QwertyParser::OperationContext::LESS() {
  return getToken(QwertyParser::LESS, 0);
}

tree::TerminalNode* QwertyParser::OperationContext::GREATER() {
  return getToken(QwertyParser::GREATER, 0);
}


size_t QwertyParser::OperationContext::getRuleIndex() const {
  return QwertyParser::RuleOperation;
}

antlrcpp::Any QwertyParser::OperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitOperation(this);
  else
    return visitor->visitChildren(this);
}


QwertyParser::OperationContext* QwertyParser::operation() {
   return operation(0);
}

QwertyParser::OperationContext* QwertyParser::operation(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  QwertyParser::OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, parentState);
  QwertyParser::OperationContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, QwertyParser::RuleOperation, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(192);
      function_call();
      break;
    }

    case 2: {
      setState(193);
      get_item();
      break;
    }

    case 3: {
      setState(194);
      get_slice();
      break;
    }

    case 4: {
      setState(195);
      len_function();
      break;
    }

    case 5: {
      setState(196);
      operand();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(217);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<OperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperation);
          setState(199);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(200);
          match(QwertyParser::SUM);
          setState(201);
          operation(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<OperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperation);
          setState(202);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(203);
          match(QwertyParser::MULT);
          setState(204);
          operation(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<OperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperation);
          setState(205);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(206);
          match(QwertyParser::IN);
          setState(207);
          operation(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<OperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperation);
          setState(208);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(209);
          match(QwertyParser::EQ);
          setState(210);
          operation(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<OperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperation);
          setState(211);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(212);
          match(QwertyParser::LESS);
          setState(213);
          operation(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<OperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleOperation);
          setState(214);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(215);
          match(QwertyParser::GREATER);
          setState(216);
          operation(4);
          break;
        }

        } 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

QwertyParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::NameContext* QwertyParser::Function_callContext::name() {
  return getRuleContext<QwertyParser::NameContext>(0);
}

tree::TerminalNode* QwertyParser::Function_callContext::OPEN_PARANTHESIS() {
  return getToken(QwertyParser::OPEN_PARANTHESIS, 0);
}

QwertyParser::Param_listContext* QwertyParser::Function_callContext::param_list() {
  return getRuleContext<QwertyParser::Param_listContext>(0);
}

tree::TerminalNode* QwertyParser::Function_callContext::CLOSE_PARANTHESIS() {
  return getToken(QwertyParser::CLOSE_PARANTHESIS, 0);
}


size_t QwertyParser::Function_callContext::getRuleIndex() const {
  return QwertyParser::RuleFunction_call;
}

antlrcpp::Any QwertyParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Function_callContext* QwertyParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 30, QwertyParser::RuleFunction_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    name();
    setState(223);
    match(QwertyParser::OPEN_PARANTHESIS);
    setState(224);
    param_list();
    setState(225);
    match(QwertyParser::CLOSE_PARANTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_itemContext ------------------------------------------------------------------

QwertyParser::Get_itemContext::Get_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::OperandContext* QwertyParser::Get_itemContext::operand() {
  return getRuleContext<QwertyParser::OperandContext>(0);
}

tree::TerminalNode* QwertyParser::Get_itemContext::OPEN_SQUARE_BRACKET() {
  return getToken(QwertyParser::OPEN_SQUARE_BRACKET, 0);
}

QwertyParser::OperationContext* QwertyParser::Get_itemContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}

tree::TerminalNode* QwertyParser::Get_itemContext::CLOSE_SQUARE_BRACKET() {
  return getToken(QwertyParser::CLOSE_SQUARE_BRACKET, 0);
}


size_t QwertyParser::Get_itemContext::getRuleIndex() const {
  return QwertyParser::RuleGet_item;
}

antlrcpp::Any QwertyParser::Get_itemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitGet_item(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Get_itemContext* QwertyParser::get_item() {
  Get_itemContext *_localctx = _tracker.createInstance<Get_itemContext>(_ctx, getState());
  enterRule(_localctx, 32, QwertyParser::RuleGet_item);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    operand();
    setState(228);
    match(QwertyParser::OPEN_SQUARE_BRACKET);
    setState(229);
    operation(0);
    setState(230);
    match(QwertyParser::CLOSE_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Get_sliceContext ------------------------------------------------------------------

QwertyParser::Get_sliceContext::Get_sliceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::OperandContext* QwertyParser::Get_sliceContext::operand() {
  return getRuleContext<QwertyParser::OperandContext>(0);
}

tree::TerminalNode* QwertyParser::Get_sliceContext::OPEN_SQUARE_BRACKET() {
  return getToken(QwertyParser::OPEN_SQUARE_BRACKET, 0);
}

tree::TerminalNode* QwertyParser::Get_sliceContext::SEP() {
  return getToken(QwertyParser::SEP, 0);
}

tree::TerminalNode* QwertyParser::Get_sliceContext::CLOSE_SQUARE_BRACKET() {
  return getToken(QwertyParser::CLOSE_SQUARE_BRACKET, 0);
}

std::vector<QwertyParser::OperationContext *> QwertyParser::Get_sliceContext::operation() {
  return getRuleContexts<QwertyParser::OperationContext>();
}

QwertyParser::OperationContext* QwertyParser::Get_sliceContext::operation(size_t i) {
  return getRuleContext<QwertyParser::OperationContext>(i);
}


size_t QwertyParser::Get_sliceContext::getRuleIndex() const {
  return QwertyParser::RuleGet_slice;
}

antlrcpp::Any QwertyParser::Get_sliceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitGet_slice(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Get_sliceContext* QwertyParser::get_slice() {
  Get_sliceContext *_localctx = _tracker.createInstance<Get_sliceContext>(_ctx, getState());
  enterRule(_localctx, 34, QwertyParser::RuleGet_slice);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    operand();
    setState(233);
    match(QwertyParser::OPEN_SQUARE_BRACKET);
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << QwertyParser::LEN)
      | (1ULL << QwertyParser::NAME)
      | (1ULL << QwertyParser::IDENT))) != 0)) {
      setState(234);
      operation(0);
    }
    setState(237);
    match(QwertyParser::SEP);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << QwertyParser::LEN)
      | (1ULL << QwertyParser::NAME)
      | (1ULL << QwertyParser::IDENT))) != 0)) {
      setState(238);
      operation(0);
    }
    setState(241);
    match(QwertyParser::CLOSE_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

QwertyParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<QwertyParser::OperationContext *> QwertyParser::Param_listContext::operation() {
  return getRuleContexts<QwertyParser::OperationContext>();
}

QwertyParser::OperationContext* QwertyParser::Param_listContext::operation(size_t i) {
  return getRuleContext<QwertyParser::OperationContext>(i);
}

std::vector<tree::TerminalNode *> QwertyParser::Param_listContext::COMMA() {
  return getTokens(QwertyParser::COMMA);
}

tree::TerminalNode* QwertyParser::Param_listContext::COMMA(size_t i) {
  return getToken(QwertyParser::COMMA, i);
}


size_t QwertyParser::Param_listContext::getRuleIndex() const {
  return QwertyParser::RuleParam_list;
}

antlrcpp::Any QwertyParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Param_listContext* QwertyParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 36, QwertyParser::RuleParam_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << QwertyParser::LEN)
      | (1ULL << QwertyParser::NAME)
      | (1ULL << QwertyParser::IDENT))) != 0)) {
      setState(243);
      operation(0);
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == QwertyParser::COMMA) {
        setState(244);
        match(QwertyParser::COMMA);
        setState(245);
        operation(0);
        setState(250);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Len_functionContext ------------------------------------------------------------------

QwertyParser::Len_functionContext::Len_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::Len_functionContext::LEN() {
  return getToken(QwertyParser::LEN, 0);
}

tree::TerminalNode* QwertyParser::Len_functionContext::OPEN_PARANTHESIS() {
  return getToken(QwertyParser::OPEN_PARANTHESIS, 0);
}

QwertyParser::OperationContext* QwertyParser::Len_functionContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}

tree::TerminalNode* QwertyParser::Len_functionContext::CLOSE_PARANTHESIS() {
  return getToken(QwertyParser::CLOSE_PARANTHESIS, 0);
}


size_t QwertyParser::Len_functionContext::getRuleIndex() const {
  return QwertyParser::RuleLen_function;
}

antlrcpp::Any QwertyParser::Len_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitLen_function(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Len_functionContext* QwertyParser::len_function() {
  Len_functionContext *_localctx = _tracker.createInstance<Len_functionContext>(_ctx, getState());
  enterRule(_localctx, 38, QwertyParser::RuleLen_function);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(QwertyParser::LEN);
    setState(254);
    match(QwertyParser::OPEN_PARANTHESIS);
    setState(255);
    operation(0);
    setState(256);
    match(QwertyParser::CLOSE_PARANTHESIS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

QwertyParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::ConditionContext::OPEN_PARANTHESIS() {
  return getToken(QwertyParser::OPEN_PARANTHESIS, 0);
}

std::vector<QwertyParser::Logical_conjContext *> QwertyParser::ConditionContext::logical_conj() {
  return getRuleContexts<QwertyParser::Logical_conjContext>();
}

QwertyParser::Logical_conjContext* QwertyParser::ConditionContext::logical_conj(size_t i) {
  return getRuleContext<QwertyParser::Logical_conjContext>(i);
}

tree::TerminalNode* QwertyParser::ConditionContext::CLOSE_PARANTHESIS() {
  return getToken(QwertyParser::CLOSE_PARANTHESIS, 0);
}

std::vector<tree::TerminalNode *> QwertyParser::ConditionContext::OR() {
  return getTokens(QwertyParser::OR);
}

tree::TerminalNode* QwertyParser::ConditionContext::OR(size_t i) {
  return getToken(QwertyParser::OR, i);
}


size_t QwertyParser::ConditionContext::getRuleIndex() const {
  return QwertyParser::RuleCondition;
}

antlrcpp::Any QwertyParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::ConditionContext* QwertyParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 40, QwertyParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(258);
      match(QwertyParser::OPEN_PARANTHESIS);
      setState(259);
      logical_conj();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == QwertyParser::OR) {
        setState(260);
        match(QwertyParser::OR);
        setState(261);
        logical_conj();
        setState(266);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(267);
      match(QwertyParser::CLOSE_PARANTHESIS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      logical_conj();
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == QwertyParser::OR) {
        setState(270);
        match(QwertyParser::OR);
        setState(271);
        logical_conj();
        setState(276);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_conjContext ------------------------------------------------------------------

QwertyParser::Logical_conjContext::Logical_conjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::Logical_conjContext::OPEN_PARANTHESIS() {
  return getToken(QwertyParser::OPEN_PARANTHESIS, 0);
}

QwertyParser::ConditionContext* QwertyParser::Logical_conjContext::condition() {
  return getRuleContext<QwertyParser::ConditionContext>(0);
}

tree::TerminalNode* QwertyParser::Logical_conjContext::CLOSE_PARANTHESIS() {
  return getToken(QwertyParser::CLOSE_PARANTHESIS, 0);
}

std::vector<QwertyParser::Logical_factorContext *> QwertyParser::Logical_conjContext::logical_factor() {
  return getRuleContexts<QwertyParser::Logical_factorContext>();
}

QwertyParser::Logical_factorContext* QwertyParser::Logical_conjContext::logical_factor(size_t i) {
  return getRuleContext<QwertyParser::Logical_factorContext>(i);
}

std::vector<tree::TerminalNode *> QwertyParser::Logical_conjContext::AND() {
  return getTokens(QwertyParser::AND);
}

tree::TerminalNode* QwertyParser::Logical_conjContext::AND(size_t i) {
  return getToken(QwertyParser::AND, i);
}


size_t QwertyParser::Logical_conjContext::getRuleIndex() const {
  return QwertyParser::RuleLogical_conj;
}

antlrcpp::Any QwertyParser::Logical_conjContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitLogical_conj(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Logical_conjContext* QwertyParser::logical_conj() {
  Logical_conjContext *_localctx = _tracker.createInstance<Logical_conjContext>(_ctx, getState());
  enterRule(_localctx, 42, QwertyParser::RuleLogical_conj);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(279);
      match(QwertyParser::OPEN_PARANTHESIS);
      setState(280);
      condition();
      setState(281);
      match(QwertyParser::CLOSE_PARANTHESIS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(283);
      logical_factor();
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == QwertyParser::AND) {
        setState(284);
        match(QwertyParser::AND);
        setState(285);
        logical_factor();
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_factorContext ------------------------------------------------------------------

QwertyParser::Logical_factorContext::Logical_factorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::Logical_factorContext::OPEN_PARANTHESIS() {
  return getToken(QwertyParser::OPEN_PARANTHESIS, 0);
}

QwertyParser::ConditionContext* QwertyParser::Logical_factorContext::condition() {
  return getRuleContext<QwertyParser::ConditionContext>(0);
}

tree::TerminalNode* QwertyParser::Logical_factorContext::CLOSE_PARANTHESIS() {
  return getToken(QwertyParser::CLOSE_PARANTHESIS, 0);
}

QwertyParser::OperationContext* QwertyParser::Logical_factorContext::operation() {
  return getRuleContext<QwertyParser::OperationContext>(0);
}

tree::TerminalNode* QwertyParser::Logical_factorContext::NOT() {
  return getToken(QwertyParser::NOT, 0);
}


size_t QwertyParser::Logical_factorContext::getRuleIndex() const {
  return QwertyParser::RuleLogical_factor;
}

antlrcpp::Any QwertyParser::Logical_factorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitLogical_factor(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::Logical_factorContext* QwertyParser::logical_factor() {
  Logical_factorContext *_localctx = _tracker.createInstance<Logical_factorContext>(_ctx, getState());
  enterRule(_localctx, 44, QwertyParser::RuleLogical_factor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == QwertyParser::NOT) {
      setState(293);
      match(QwertyParser::NOT);
    }
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case QwertyParser::OPEN_PARANTHESIS: {
        setState(296);
        match(QwertyParser::OPEN_PARANTHESIS);
        setState(297);
        condition();
        setState(298);
        match(QwertyParser::CLOSE_PARANTHESIS);
        break;
      }

      case QwertyParser::LEN:
      case QwertyParser::NAME:
      case QwertyParser::IDENT: {
        setState(300);
        operation(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

QwertyParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::TypeContext::BOOL() {
  return getToken(QwertyParser::BOOL, 0);
}

tree::TerminalNode* QwertyParser::TypeContext::INT() {
  return getToken(QwertyParser::INT, 0);
}

tree::TerminalNode* QwertyParser::TypeContext::STR() {
  return getToken(QwertyParser::STR, 0);
}

tree::TerminalNode* QwertyParser::TypeContext::LIST() {
  return getToken(QwertyParser::LIST, 0);
}


size_t QwertyParser::TypeContext::getRuleIndex() const {
  return QwertyParser::RuleType;
}

antlrcpp::Any QwertyParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::TypeContext* QwertyParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 46, QwertyParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << QwertyParser::BOOL)
      | (1ULL << QwertyParser::INT)
      | (1ULL << QwertyParser::STR)
      | (1ULL << QwertyParser::LIST))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

QwertyParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QwertyParser::NameContext* QwertyParser::OperandContext::name() {
  return getRuleContext<QwertyParser::NameContext>(0);
}

tree::TerminalNode* QwertyParser::OperandContext::IDENT() {
  return getToken(QwertyParser::IDENT, 0);
}


size_t QwertyParser::OperandContext::getRuleIndex() const {
  return QwertyParser::RuleOperand;
}

antlrcpp::Any QwertyParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::OperandContext* QwertyParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 48, QwertyParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case QwertyParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(305);
        name();
        break;
      }

      case QwertyParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(306);
        match(QwertyParser::IDENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

QwertyParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QwertyParser::NameContext::NAME() {
  return getToken(QwertyParser::NAME, 0);
}


size_t QwertyParser::NameContext::getRuleIndex() const {
  return QwertyParser::RuleName;
}

antlrcpp::Any QwertyParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<QwertyParserVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

QwertyParser::NameContext* QwertyParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 50, QwertyParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(QwertyParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool QwertyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return operationSempred(dynamic_cast<OperationContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool QwertyParser::operationSempred(OperationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> QwertyParser::_decisionToDFA;
atn::PredictionContextCache QwertyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN QwertyParser::_atn;
std::vector<uint16_t> QwertyParser::_serializedATN;

std::vector<std::string> QwertyParser::_ruleNames = {
  "program", "expression", "function", "param_def", "operators", "instruction", 
  "if_instruction", "for_instruction", "while_instruction", "definition_instruction", 
  "assign_instructions", "get_object", "print", "return_instruction", "operation", 
  "function_call", "get_item", "get_slice", "param_list", "len_function", 
  "condition", "logical_conj", "logical_factor", "type", "operand", "name"
};

std::vector<std::string> QwertyParser::_literalNames = {
  "", "'if'", "'else'", "'for'", "'while'", "'end'", "'bool'", "'int'", 
  "'str'", "'list'", "'true'", "'false'", "'not'", "'and'", "'or'", "'func'", 
  "'return'", "'len'", "'in'", "'eq'", "'ls'", "'gr'", "'print'", "'+'", 
  "'*'", "'+='", "'*='", "'='", "", "", "", "", "", "','", "'('", "')'", 
  "'['", "']'", "", "':'"
};

std::vector<std::string> QwertyParser::_symbolicNames = {
  "", "IF", "ELSE", "FOR", "WHILE", "END", "BOOL", "INT", "STR", "LIST", 
  "TRUE", "FALSE", "NOT", "AND", "OR", "FUNC", "RETURN", "LEN", "IN", "EQ", 
  "LESS", "GREATER", "PRINT", "SUM", "MULT", "SUM_ASSIGN", "MULT_ASSIGN", 
  "ASSIGN", "NAME", "IDENT", "STRING", "NUMBER", "BOOLEAN", "COMMA", "OPEN_PARANTHESIS", 
  "CLOSE_PARANTHESIS", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "BEGIN", 
  "SEP", "OPERATOR_DEL", "DIGIT", "COMMENT", "WS"
};

dfa::Vocabulary QwertyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> QwertyParser::_tokenNames;

QwertyParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2d, 0x13a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x3, 0x2, 0x7, 0x2, 0x38, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3b, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x3f, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x43, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x46, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x4a, 0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0x4d, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x50, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x53, 0xa, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x57, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x68, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0x6b, 0xb, 0x5, 0x5, 0x5, 0x6d, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x71, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0x75, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x78, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x7c, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x85, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8e, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x97, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xa7, 0xa, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xb5, 0xa, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xba, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xc8, 0xa, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xdc, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xdf, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xee, 0xa, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x5, 0x13, 0xf2, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xf9, 0xa, 0x14, 0xc, 0x14, 0xe, 
    0x14, 0xfc, 0xb, 0x14, 0x5, 0x14, 0xfe, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x7, 0x16, 0x109, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x10c, 0xb, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x113, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x116, 0xb, 0x16, 0x5, 0x16, 
    0x118, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x121, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x124, 0xb, 0x17, 0x5, 0x17, 0x126, 0xa, 0x17, 0x3, 0x18, 0x5, 0x18, 
    0x129, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x130, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x136, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x2, 0x3, 
    0x1e, 0x1c, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x2, 0x3, 0x3, 0x2, 0x8, 0xb, 0x2, 0x14f, 0x2, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x56, 0x3, 0x2, 0x2, 0x2, 0x6, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x6c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x84, 0x3, 0x2, 0x2, 0x2, 0xe, 0x86, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x12, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x24, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x28, 0xff, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x125, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x131, 0x3, 0x2, 0x2, 0x2, 0x32, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x137, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x7, 0x2a, 
    0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x44, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3f, 0x5, 0x4, 0x3, 0x2, 0x3d, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3e, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x2a, 0x2, 0x2, 0x41, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x49, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0x4a, 0x5, 0x4, 0x3, 0x2, 0x48, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x49, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x4d, 0x7, 0x2a, 0x2, 0x2, 0x4c, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x5, 0xc, 0x7, 0x2, 0x55, 0x57, 0x5, 
    0x1e, 0x10, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x11, 0x2, 
    0x2, 0x59, 0x5a, 0x5, 0x34, 0x1b, 0x2, 0x5a, 0x5b, 0x7, 0x24, 0x2, 0x2, 
    0x5b, 0x5c, 0x5, 0x8, 0x5, 0x2, 0x5c, 0x5d, 0x7, 0x25, 0x2, 0x2, 0x5d, 
    0x5e, 0x7, 0x28, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0xa, 0x6, 0x2, 0x5f, 0x60, 
    0x7, 0x7, 0x2, 0x2, 0x60, 0x7, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x5, 
    0x30, 0x19, 0x2, 0x62, 0x69, 0x5, 0x34, 0x1b, 0x2, 0x63, 0x64, 0x7, 
    0x23, 0x2, 0x2, 0x64, 0x65, 0x5, 0x30, 0x19, 0x2, 0x65, 0x66, 0x5, 0x34, 
    0x1b, 0x2, 0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x61, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x5, 
    0xc, 0x7, 0x2, 0x6f, 0x71, 0x5, 0x1e, 0x10, 0x2, 0x70, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x73, 0x7, 0x2a, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7c, 0x5, 
    0xc, 0x7, 0x2, 0x7a, 0x7c, 0x5, 0x1e, 0x10, 0x2, 0x7b, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x85, 0x5, 0xe, 0x8, 0x2, 
    0x7e, 0x85, 0x5, 0x10, 0x9, 0x2, 0x7f, 0x85, 0x5, 0x12, 0xa, 0x2, 0x80, 
    0x85, 0x5, 0x14, 0xb, 0x2, 0x81, 0x85, 0x5, 0x16, 0xc, 0x2, 0x82, 0x85, 
    0x5, 0x1a, 0xe, 0x2, 0x83, 0x85, 0x5, 0x1c, 0xf, 0x2, 0x84, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x84, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x80, 0x3, 0x2, 0x2, 0x2, 0x84, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0xd, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x3, 0x2, 0x2, 0x87, 
    0x88, 0x5, 0x2a, 0x16, 0x2, 0x88, 0x89, 0x7, 0x28, 0x2, 0x2, 0x89, 0x8d, 
    0x5, 0xa, 0x6, 0x2, 0x8a, 0x8b, 0x7, 0x4, 0x2, 0x2, 0x8b, 0x8c, 0x7, 
    0x28, 0x2, 0x2, 0x8c, 0x8e, 0x5, 0xa, 0x6, 0x2, 0x8d, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x7, 0x7, 0x2, 0x2, 0x90, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x91, 0x92, 0x7, 0x5, 0x2, 0x2, 0x92, 0x93, 0x5, 0x34, 0x1b, 0x2, 0x93, 
    0x96, 0x7, 0x23, 0x2, 0x2, 0x94, 0x97, 0x5, 0x32, 0x1a, 0x2, 0x95, 0x97, 
    0x5, 0x1e, 0x10, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x28, 
    0x2, 0x2, 0x99, 0x9a, 0x5, 0xa, 0x6, 0x2, 0x9a, 0x9b, 0x7, 0x7, 0x2, 
    0x2, 0x9b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x6, 0x2, 0x2, 
    0x9d, 0x9e, 0x5, 0x2a, 0x16, 0x2, 0x9e, 0x9f, 0x7, 0x28, 0x2, 0x2, 0x9f, 
    0xa0, 0x5, 0xa, 0x6, 0x2, 0xa0, 0xa1, 0x7, 0x7, 0x2, 0x2, 0xa1, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x30, 0x19, 0x2, 0xa3, 0xa6, 0x5, 
    0x34, 0x1b, 0x2, 0xa4, 0xa5, 0x7, 0x1d, 0x2, 0x2, 0xa5, 0xa7, 0x5, 0x1e, 
    0x10, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x18, 0xd, 0x2, 
    0xa9, 0xaa, 0x7, 0x1d, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x1e, 0x10, 0x2, 0xab, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 0x18, 0xd, 0x2, 0xad, 0xae, 
    0x7, 0x1c, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x1e, 0x10, 0x2, 0xaf, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x18, 0xd, 0x2, 0xb1, 0xb2, 0x7, 0x1b, 
    0x2, 0x2, 0xb2, 0xb3, 0x5, 0x1e, 0x10, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xba, 0x5, 0x34, 0x1b, 0x2, 0xb7, 0xba, 0x5, 0x24, 0x13, 0x2, 0xb8, 
    0xba, 0x5, 0x22, 0x12, 0x2, 0xb9, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x18, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x26, 
    0x14, 0x2, 0xbd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x12, 0x2, 
    0x2, 0xbf, 0xc0, 0x5, 0x1e, 0x10, 0x2, 0xc0, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x8, 0x10, 0x1, 0x2, 0xc2, 0xc8, 0x5, 0x20, 0x11, 0x2, 0xc3, 
    0xc8, 0x5, 0x22, 0x12, 0x2, 0xc4, 0xc8, 0x5, 0x24, 0x13, 0x2, 0xc5, 
    0xc8, 0x5, 0x28, 0x15, 0x2, 0xc6, 0xc8, 0x5, 0x32, 0x1a, 0x2, 0xc7, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0xc, 0xa, 
    0x2, 0x2, 0xca, 0xcb, 0x7, 0x19, 0x2, 0x2, 0xcb, 0xdc, 0x5, 0x1e, 0x10, 
    0xb, 0xcc, 0xcd, 0xc, 0x9, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x1a, 0x2, 0x2, 
    0xce, 0xdc, 0x5, 0x1e, 0x10, 0xa, 0xcf, 0xd0, 0xc, 0x8, 0x2, 0x2, 0xd0, 
    0xd1, 0x7, 0x14, 0x2, 0x2, 0xd1, 0xdc, 0x5, 0x1e, 0x10, 0x9, 0xd2, 0xd3, 
    0xc, 0x7, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x15, 0x2, 0x2, 0xd4, 0xdc, 0x5, 
    0x1e, 0x10, 0x8, 0xd5, 0xd6, 0xc, 0x6, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x16, 
    0x2, 0x2, 0xd7, 0xdc, 0x5, 0x1e, 0x10, 0x7, 0xd8, 0xd9, 0xc, 0x5, 0x2, 
    0x2, 0xd9, 0xda, 0x7, 0x17, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x1e, 0x10, 0x6, 
    0xdb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x5, 0x34, 0x1b, 0x2, 0xe1, 0xe2, 0x7, 0x24, 0x2, 0x2, 
    0xe2, 0xe3, 0x5, 0x26, 0x14, 0x2, 0xe3, 0xe4, 0x7, 0x25, 0x2, 0x2, 0xe4, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x32, 0x1a, 0x2, 0xe6, 0xe7, 
    0x7, 0x26, 0x2, 0x2, 0xe7, 0xe8, 0x5, 0x1e, 0x10, 0x2, 0xe8, 0xe9, 0x7, 
    0x27, 0x2, 0x2, 0xe9, 0x23, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x32, 
    0x1a, 0x2, 0xeb, 0xed, 0x7, 0x26, 0x2, 0x2, 0xec, 0xee, 0x5, 0x1e, 0x10, 
    0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf1, 0x7, 0x29, 0x2, 0x2, 0xf0, 
    0xf2, 0x5, 0x1e, 0x10, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 
    0x27, 0x2, 0x2, 0xf4, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xfa, 0x5, 0x1e, 
    0x10, 0x2, 0xf6, 0xf7, 0x7, 0x23, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0x1e, 0x10, 
    0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf5, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 0x13, 0x2, 0x2, 0x100, 0x101, 0x7, 
    0x24, 0x2, 0x2, 0x101, 0x102, 0x5, 0x1e, 0x10, 0x2, 0x102, 0x103, 0x7, 
    0x25, 0x2, 0x2, 0x103, 0x29, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 
    0x24, 0x2, 0x2, 0x105, 0x10a, 0x5, 0x2c, 0x17, 0x2, 0x106, 0x107, 0x7, 
    0x10, 0x2, 0x2, 0x107, 0x109, 0x5, 0x2c, 0x17, 0x2, 0x108, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 
    0x25, 0x2, 0x2, 0x10e, 0x118, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x114, 0x5, 
    0x2c, 0x17, 0x2, 0x110, 0x111, 0x7, 0x10, 0x2, 0x2, 0x111, 0x113, 0x5, 
    0x2c, 0x17, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x104, 0x3, 0x2, 0x2, 0x2, 0x117, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x24, 
    0x2, 0x2, 0x11a, 0x11b, 0x5, 0x2a, 0x16, 0x2, 0x11b, 0x11c, 0x7, 0x25, 
    0x2, 0x2, 0x11c, 0x126, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x122, 0x5, 0x2e, 
    0x18, 0x2, 0x11e, 0x11f, 0x7, 0xf, 0x2, 0x2, 0x11f, 0x121, 0x5, 0x2e, 
    0x18, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x121, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x119, 0x3, 0x2, 0x2, 0x2, 0x125, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x127, 0x129, 0x7, 0xe, 0x2, 
    0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x24, 0x2, 
    0x2, 0x12b, 0x12c, 0x5, 0x2a, 0x16, 0x2, 0x12c, 0x12d, 0x7, 0x25, 0x2, 
    0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x5, 0x1e, 0x10, 
    0x2, 0x12f, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x9, 0x2, 0x2, 0x2, 
    0x132, 0x31, 0x3, 0x2, 0x2, 0x2, 0x133, 0x136, 0x5, 0x34, 0x1b, 0x2, 
    0x134, 0x136, 0x7, 0x1f, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 
    0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x33, 0x3, 0x2, 0x2, 0x2, 0x137, 
    0x138, 0x7, 0x1e, 0x2, 0x2, 0x138, 0x35, 0x3, 0x2, 0x2, 0x2, 0x23, 0x39, 
    0x3e, 0x44, 0x49, 0x4e, 0x52, 0x56, 0x69, 0x6c, 0x70, 0x76, 0x7b, 0x84, 
    0x8d, 0x96, 0xa6, 0xb4, 0xb9, 0xc7, 0xdb, 0xdd, 0xed, 0xf1, 0xfa, 0xfd, 
    0x10a, 0x114, 0x117, 0x122, 0x125, 0x128, 0x12f, 0x135, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

QwertyParser::Initializer QwertyParser::_init;
