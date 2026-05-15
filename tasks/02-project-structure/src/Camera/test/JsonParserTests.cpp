#include <gtest/gtest.h>

#include <JsonCameraDataParser.h>

namespace parsers::test
{

TEST(TestCase, FailingTest)
{
    JsonCameraDataParser sut;
    FAIL();
}

} // namespace parsers::test