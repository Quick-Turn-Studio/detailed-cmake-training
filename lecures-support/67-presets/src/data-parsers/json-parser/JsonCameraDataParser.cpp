#include "JsonCameraDataParser.h"

#include <nlohmann/json.hpp>

namespace parsers
{

data::CameraData JsonCameraDataParser::parseContent(const std::string& content)
{
    nlohmann::json object;
    return data::CameraData();
}

std::string JsonCameraDataParser::dataToString(const data::CameraData& data)
{
    return std::string();
}

}
