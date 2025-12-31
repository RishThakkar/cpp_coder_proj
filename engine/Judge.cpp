#include "Judge.h"
#include <fstream>
#include <iostream>
#include <string>

bool Judge::judge(const std::string& outputFile,
                  const std::string& expectedFile) {

    std::ifstream out(outputFile);
    std::ifstream exp(expectedFile);

    if (!out.is_open() || !exp.is_open()) {
        std::cerr << "Error: Unable to open output or expected file\n";
        return false;
    }

    std::string outLine, expLine;
    int lineNumber = 1;

    while (true) {
        bool outEOF = !std::getline(out, outLine);
        bool expEOF = !std::getline(exp, expLine);

        if (outEOF && expEOF) {
            std::cout << "✔ Accepted\n";
            return true;
        }

        if (outEOF || expEOF) {
            std::cout << "❌ Wrong Answer (Line count mismatch at line "
                      << lineNumber << ")\n";
            return false;
        }

        if (outLine != expLine) {
            std::cout << "❌ Wrong Answer at line " << lineNumber << "\n";
            std::cout << "Expected: " << expLine << "\n";
            std::cout << "Got     : " << outLine << "\n";
            return false;
        }

        lineNumber++;
    }
}
