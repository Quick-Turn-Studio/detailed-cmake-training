#pragma once

#include <string>

namespace file
{

/**
* @brief Open text files and return content. If file does not exist returns empty string
* @param filePath - path to file to load.
*/
std::string loadTextFile(const std::string& filePath);

} // namespace file
