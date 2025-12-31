#ifndef RUNNER_H
#define RUNNER_H

#include <string>

class Runner {
public:
    // Runs the compiled executable with input redirected from inputFile
    // Output is written to outputFile
    // Returns true if execution succeeds, false otherwise
    static bool runExecutable(const std::string& executablePath,
                              const std::string& inputFile,
                              const std::string& outputFile);
};

#endif // RUNNER_H
