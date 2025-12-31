#ifndef TEMPLATE_GENERATOR_H
#define TEMPLATE_GENERATOR_H

#include <string>

class TemplateGenerator {
public:
    static bool generate(const std::string& outputPath,
                         const std::string& functionSignature);
};

#endif // TEMPLATE_GENERATOR_H
