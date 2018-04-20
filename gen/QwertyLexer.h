
// Generated from QwertyLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace AntlrQwerty {


class  QwertyLexer : public antlr4::Lexer {
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

  QwertyLexer(antlr4::CharStream *input);
  ~QwertyLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace AntlrQwerty
