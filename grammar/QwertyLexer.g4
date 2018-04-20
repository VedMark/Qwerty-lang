lexer grammar QwertyLexer;

IF: 'if';

ELSE: 'else';

FOR: 'for';

WHILE: 'while';

END: 'end';

BOOL: 'bool';

INT: 'int';

STR: 'str';

LIST: 'list';

TRUE: 'true';

FALSE: 'false';

NOT: 'not';

AND: 'and';

OR: 'or';

FUNC: 'func';

RETURN: 'return';

LEN: 'len';

IN: 'in';

EQ: 'eq';

LESS: 'ls';

GREATER: 'gr';

PRINT: 'print';

SUM: '+';

MULT: '*';

SUM_ASSIGN: '+=';

MULT_ASSIGN: '*=';

ASSIGN: '=';

NAME
    : NONDIGIT ( DIGIT | NONDIGIT )*
    ;

IDENT
    : STRING | NUMBER | BOOLEAN
    ;

STRING
    : '\'' ( S_CHAR | S_ESCAPE )* '\''
    | '"' ( D_CHAR | D_ESCAPE )* '"'
    ;

NUMBER
    : '-'? NON_ZERO_DIGIT ( DIGIT )*
    ;

BOOLEAN
    : TRUE | FALSE
    ;

COMMA
    : ','
    ;

OPEN_PARANTHESIS
    : '('
    ;

CLOSE_PARANTHESIS
    : ')'
    ;

OPEN_SQUARE_BRACKET
    : '['
    ;

CLOSE_SQUARE_BRACKET
    : ']'
    ;

BEGIN
    : ':' [\r\n]*
    ;

SEP
    : ':'
    ;

OPERATOR_DEL
    : (';' | ';' [\r\n]+ | [\r\n]+)
    ;

fragment D_CHAR
    : CHAR | '\'' ;

fragment S_CHAR
    : CHAR | '"' ;

fragment CHAR
    : ~ ['"\\]
    ;

fragment NONDIGIT
    : '_' | 'a' .. 'z' | 'A' .. 'Z'
    ;

fragment Q_CHAR
    : NONDIGIT | DIGIT
    | '!' | '#' | '$' | '%' | '&' | '(' | ')' | '*' | '+' | ',' | '-' | '.' | '/'
    | ':' | ';' | '<' | '>' | '=' | '?' | '@' | '[' | ']' | '^' | '{' | '}' | '|' | '~'
    ;

fragment D_ESCAPE
    : ESCAPE | '\\"' ;

fragment S_ESCAPE
    : ESCAPE | '\\\'' ;

fragment ESCAPE
    : '\\' ( '?' | '’' | '\\' | 'a' | 'b' | 'f' | 'n' | 'r' | 't' | 'v' )
    ;

DIGIT
    : '0' | NON_ZERO_DIGIT
    ;

fragment NON_ZERO_DIGIT
    : '1' .. '9'
    ;

COMMENT
    : '//' ~[\r\n]* -> skip
    ;

WS
    : [ \t]+ -> skip
    ;
