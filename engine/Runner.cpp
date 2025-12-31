#include "Runner.h"
#include <cstdlib>
#include <iostream>

bool Runner::runExecutable(const std::string& executablePath,
                           const std::string& inputFile,
                           const std::string& outputFile)
{
    // Build command:
    // ./solution < input.txt > output.txt
    std::string command =
        executablePath + " < " + inputFile + " > " + outputFile;

    int ret = std::system(command.c_str());

    if (ret != 0) {
        std::cerr << "[Runner] Execution failed with code: " << ret << std::endl;
        return false;
    }

    return true;
}
