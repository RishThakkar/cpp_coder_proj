#include "Compiler.h"
#include <cstdlib>
#include <fstream>
#include <sstream>

bool Compiler::compile(const std::string& sourceFile,
                       const std::string& outputBinary,
                       std::string& errorLog)
{
    std::string errorFile = "compile_errors.txt";

    std::string command =
        "g++ -std=gnu++17 " + sourceFile +
        " -o " + outputBinary +
        " 2> " + errorFile;

    int ret = system(command.c_str());

    if (ret != 0) {
        std::ifstream errStream(errorFile);
        std::stringstream buffer;
        buffer << errStream.rdbuf();
        errorLog = buffer.str();
        return false;
    }

    errorLog.clear();
    return true;
}
