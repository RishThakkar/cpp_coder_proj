#ifndef JUDGE_H
#define JUDGE_H

#include <string>

class Judge {
public:
    // Compares output file with expected output file
    // Returns true if accepted, false otherwise
    static bool judge(const std::string& outputFile,
                      const std::string& expectedFile);
};

#endif
