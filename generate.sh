#!/bin/bash
set -o errexit

LOCATION=../lib/antlr-4.7.1-complete.jar

rm -rf gen/
cd grammar
java -jar ${LOCATION} -Dlanguage=Cpp -no-listener -visitor -o ../gen/ -package AntlrQwerty QwertyLexer.g4 QwertyParser.g4
cd ..
