parser grammar QwertyParser;

options {
    tokenVocab=QwertyLexer;
}

program
    : OPERATOR_DEL* ( ( expression | function ) OPERATOR_DEL )* ( expression | function ) OPERATOR_DEL*
    |;

expression
    : instruction | operation
    ;

function
    : FUNC name OPEN_PARANTHESIS param_def CLOSE_PARANTHESIS BEGIN operators END
    ;

param_def
    : ( type name ( COMMA type name )* )?
    ;

operators
    : ( ( instruction | operation ) OPERATOR_DEL )* ( instruction | operation )?
    ;

instruction
    : if_instruction
    | for_instruction
    | while_instruction
    | definition_instruction
    | assign_instructions
    | print
    | return_instruction
    ;

if_instruction
    : IF condition BEGIN operators ( ELSE BEGIN operators )? END
    ;

for_instruction
    : FOR name COMMA ( operand | operation ) BEGIN operators END
    ;

while_instruction
    : WHILE condition BEGIN operators END
    ;

definition_instruction
    : type name (ASSIGN operation)?
    ;

assign_instructions
    : get_object ASSIGN operation
    | get_object MULT_ASSIGN operation
    | get_object SUM_ASSIGN operation
    ;

get_object
    : name | get_slice | get_item
    ;

print
    : PRINT param_list
    ;

return_instruction
    : RETURN operation
    ;

operation
    : function_call
    | get_item
    | get_slice
    | operation SUM operation
    | operation MULT operation
    | operation IN operation
    | operation EQ operation
    | operation LESS operation
    | operation GREATER operation
    | len_function
    | operand
    ;

function_call
    : name OPEN_PARANTHESIS param_list CLOSE_PARANTHESIS
    ;

get_item
    : operand OPEN_SQUARE_BRACKET operation CLOSE_SQUARE_BRACKET
    ;

get_slice
    : operand OPEN_SQUARE_BRACKET operation? SEP operation? CLOSE_SQUARE_BRACKET
    ;

param_list
    : ( operation ( COMMA operation )* )?
    ;

len_function
    : LEN OPEN_PARANTHESIS operation CLOSE_PARANTHESIS
    ;

condition
   : OPEN_PARANTHESIS logical_conj ( OR logical_conj )* CLOSE_PARANTHESIS
   | logical_conj ( OR logical_conj )*
   ;

logical_conj
   : OPEN_PARANTHESIS condition CLOSE_PARANTHESIS
   | logical_factor ( AND logical_factor )*
   ;

logical_factor
   : ( NOT )? ( OPEN_PARANTHESIS condition CLOSE_PARANTHESIS | operation )
   ;

type
    : BOOL | INT | STR | LIST
    ;

operand
    : name | IDENT
    ;

name
    : NAME
    ;
