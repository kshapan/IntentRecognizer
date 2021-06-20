
#include <gtest/gtest.h>
#include "../src/intent_recognizer.hpp"

class IntentRecognizerTest
    : public testing::TestWithParam<std::tuple<std::string,
                                               std::string>>
{
};

INSTANTIATE_TEST_CASE_P(
    IntentRecognizerTestParams,
    IntentRecognizerTest,
    ::testing::Values(std::make_tuple("What is the weather like today?",
                                      "Get Weather"),
                      std::make_tuple("What is the weather like in Paris today?",
                                      "Get Weather City"),
                      std::make_tuple("What is the weather like in New York today?",
                                      "Get Weather City"),
                      std::make_tuple("Am I free at 13:00 PM tomorrow?",
                                      "Check Calender"),
                      std::make_tuple("Tell me an interesting fact.",
                                      "Get Fact"),
                      std::make_tuple("Tell me an interesting.",
                                      "Intent Not Determined")));


TEST_P(IntentRecognizerTest, GetIntent)
{
    const auto& test_config{GetParam()};
    IntentRecognizer unit;

    auto result = unit.getIntent(std::get<0>(test_config));

    ASSERT_EQ(std::get<1>(test_config), result);
}


int main(int argc, char ** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}