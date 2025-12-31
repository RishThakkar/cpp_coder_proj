#ifndef COMPILER_H
#define COMPILER_H

#include <string>
/*  Compiles sourceFile into outputBinary
    Returns true if compilation succeeds
    On failure, errorLog contains compiler errors
*/
class Compiler {
public:
    bool compile(const std::string& sourceFile,
                 const std::string& outputBinary,
                 std::string& errorLog);
};

#endif // COMPILER_H
