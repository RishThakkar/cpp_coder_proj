#include "TemplateGenerator.h"
#include <fstream>
#include <iostream>

bool TemplateGenerator::generate(const std::string& outputPath,
                                 const std::string& functionSignature) {
    std::ofstream out(outputPath);
    if (!out.is_open()) {
        std::cerr << "Failed to create template file: "
                  << outputPath << std::endl;
        return false;
    }

    out << "#include <bits/stdc++.h>\n";
    out << "using namespace std;\n\n";

    out << "// USER IMPLEMENTATION\n";
    out << functionSignature << " {\n";
    out << "    // TODO: Write your solution here\n";
    out << "}\n\n";

    out << "// PLATFORM OWNED MAIN (DO NOT MODIFY)\n";
    out << "int main() {\n";
    out << "    // Test cases will be injected here\n";
    out << "    return 0;\n";
    out << "}\n";

    out.close();
    return true;
}
