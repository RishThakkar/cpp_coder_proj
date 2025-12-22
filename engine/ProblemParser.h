#ifndef PROBLEM_PARSER_H
#define PROBLEM_PARSER_H

#include <iostream>
#include <string>

class ProblemParser {
private:
    std::string title;
    std::string functionSignature;
    std::string problemFilePath;

    void parse();   

public:
    // Constructor
    explicit ProblemParser(const std::string& filePath);

    // Getters
    std::string getTitle() const;
    std::string getFunctionSignature() const;
};

#endif // PROBLEM_PARSER_H
