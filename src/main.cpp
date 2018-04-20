#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"

#include "../gen/QwertyLexer.h"
#include "../gen/QwertyParser.h"
#include "QwertyParserBaseVisitorImpl.h"

using namespace antlr4;
using namespace AntlrQwerty;

int main(int argc, char **argv) {

    try {
        if (3 != argc) {
            throw std::invalid_argument("Wrong number of argument!");
        }

        std::ifstream in_stream(argv[1]);
        if(!in_stream.is_open()) {
            throw std::domain_error("file " + std::string(argv[1]) + " does not exists");
        }

        ANTLRInputStream source_text_stream(in_stream);
        QwertyLexer lexer(&source_text_stream);
        CommonTokenStream tokens(&lexer);
        QwertyParser parser(&tokens);
        QwertyParserBaseVisitorImpl visitor;
        std::ofstream out_stream(argv[2]);

        auto translated_text = visitor.visit(parser.program()).as<std::string>();
        out_stream << translated_text;

        in_stream.close();
        out_stream.close();
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}
