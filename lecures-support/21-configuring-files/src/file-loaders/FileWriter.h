#pragma once

#include <string>

namespace file
{

/**
* @brief Creates file with given content.
* @param filePath - path to file to create.
* @param fileContent - file content.
* @return false if file cannot be created, true if file is created
*/
bool writeTextFile(const std::string& filePath, const std::string& fileContent);

} // namespace file
