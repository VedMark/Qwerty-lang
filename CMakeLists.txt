if (NOT UNIX)
    message(WARNING "Unsupported operating system")
endif ()

cmake_minimum_required(VERSION 3.5.2)
project(qwerty_lang)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        ${PROJECT_SOURCE_DIR}/lib/antlr4-runtime
        ${PROJECT_SOURCE_DIR}/lib/antlr4-runtime/misc
        ${PROJECT_SOURCE_DIR}/lib/antlr4-runtime/atn
        ${PROJECT_SOURCE_DIR}/lib/antlr4-runtime/dfa
        ${PROJECT_SOURCE_DIR}/lib/antlr4-runtime/tree
        ${PROJECT_SOURCE_DIR}/lib/antlr4-runtime/support
)

set(antlr4-qwerty_GENERATED_SRC
        gen/QwertyLexer.cpp
        gen/QwertyParser.cpp
        gen/QwertyParserBaseVisitor.cpp
        gen/QwertyParserVisitor.cpp
        )

set(antlr4-qwerty_SRC
        src/main.cpp
        ${antlr4-qwerty_GENERATED_SRC}
        src/QwertyParserBaseVisitorImpl.cpp src/QwertyParserBaseVisitorImpl.h src/QwertySyntaxException.h src/PairSet.h)

set(CMAKE_CPP_FLAGS "-std=c++14 -Wall -pedantic -Werror -o2")
add_executable(qwerty_lang ${antlr4-qwerty_SRC})

target_link_libraries(qwerty_lang ${PROJECT_SOURCE_DIR}/lib/libantlr4-runtime.a)
