#include <iostream>
#include <string>

// Include your engine headers
#include "ProblemParser.h"
#include "TemplateGenerator.h"
#include "Compiler.h"
#include "Runner.h"
#include "Judge.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./coder <path_to_problem_directory>\n";
        return 1;
    }

    std::string problemDir = argv[1];

    // File paths
    std::string problemFile   = problemDir + "/problem.txt";
    std::string testcasesFile = problemDir + "/testcases.txt";
    std::string expectedFile  = problemDir + "/expected.txt";
    std::string solutionFile  = problemDir + "/solution.cpp";
    std::string executable    = problemDir + "/solution_exec";
    std::string outputFile    = problemDir + "/output.txt";

    /* ----------------------------------------------------
     * 1. Parse problem.txt
     * ---------------------------------------------------- */
    ProblemParser parser(problemFile);

    std::string title = parser.getTitle();
    std::string functionSignature = parser.getFunctionSignature();

    std::cout << "Problem: " << title << std::endl;

    /* ----------------------------------------------------
     * 2. Generate solution.cpp template
     * ---------------------------------------------------- */
    if (!TemplateGenerator::generate(solutionFile, functionSignature)) {
        std::cerr << "Failed to generate solution template\n";
        return 1;
    }

    std::cout << "Template generated: " << solutionFile << std::endl;
    std::cout << "Opening editor...\n";

    // Open editor (simple approach for now)
    system(("code " + solutionFile).c_str());

    std::cout << "Press ENTER after saving your solution...";
    std::cin.get();

    /* ----------------------------------------------------
     * 3. Compile solution.cpp
     * ---------------------------------------------------- */
    Compiler compiler;
    std::string errorLog;

    if (!compiler.compile(solutionFile, executable, errorLog)) {
        std::cerr << "Compilation failed:\n";
        std::cerr << errorLog << std::endl;
        return 1;
    }

    std::cout << "Compilation successful\n";

    /* ----------------------------------------------------
     * 4. Run executable with testcases
     * ---------------------------------------------------- */
    if (!Runner::runExecutable(executable, testcasesFile, outputFile)) {
        std::cerr << "Runtime error while executing solution\n";
        return 1;
    }

    std::cout << "Execution completed\n";

    /* ----------------------------------------------------
     * 5. Judge output
     * ---------------------------------------------------- */
    bool accepted = Judge::judge(outputFile, expectedFile);

    if (accepted) {
        std::cout << "✅ Accepted\n";
    } else {
        std::cout << "❌ Wrong Answer\n";
    }

    return 0;
}
