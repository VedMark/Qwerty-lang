# Qwerty-lang
Language for convenient work with strings.

## Getting Started

### Prerequisites
  - JDK 8
  - Cmake >= 3.10
  - bash
  
### Building Grammar

Edit files QwertyLexer.g4, QwertyParser.g4 in grammar folder and run:
```sh

$ ./generate.sh

```

Implement methods in src/QwertyParserBaseVisitor.h, src/QwertyParserBaseVisitor.cpp.

### Running:
```sh

$ ./qwerty.sh <file>

```
where \<file\> is a name of program whitten in Qwerty lang.
