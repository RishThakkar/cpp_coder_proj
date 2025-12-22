#include "ProblemParser.h"
#include <fstream>
#include <stdexcept>

ProblemParser::ProblemParser(const std::string& filePath)
    : problemFilePath(filePath)
{
    parse();
}

void ProblemParser::parse() {
    std::ifstream file(problemFilePath);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open problem file: " + problemFilePath);
    }

    std::string line;
    while (std::getline(file, line)) {

        // TITLE 
        if (line.find("TITLE:") == 0) {
            title = line.substr(6);  // after "TITLE:"
            // trim leading space
            if (!title.empty() && title[0] == ' ')
                title.erase(0, 1);
        }

        // FUNCTION 
        else if (line.find("FUNCTION:") == 0) {
            functionSignature = line.substr(9);  // after "FUNCTION:"
            if (!functionSignature.empty() && functionSignature[0] == ' ')
                functionSignature.erase(0, 1);
        }
    }

    if (title.empty() || functionSignature.empty()) {
        throw std::runtime_error("Invalid problem file format");
    }
}

std::string ProblemParser::getTitle() const {
    return title;
}

std::string ProblemParser::getFunctionSignature() const {
    return functionSignature;
}
