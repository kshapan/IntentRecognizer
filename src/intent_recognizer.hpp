#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

class IntentRecognizer
{
    regex regexForGetWeather{"What is the weather like today\\?"};
    regex regexForGetCityWeather{"What is the weather like in [a-zA-Z]+\\s?[a-zA-Z]+ today\\?"};
    regex regexForCheckCalender{"Am I free at [0-9:]+ (AM|am|PM|PM)? tomorrow\\?"};
    regex regexForGetFact{"[Ff]act"};
    std::vector<string> intents_of_request_{
    "Get Weather", 
    "Get Weather City",
    "Check Calender",
    "Get Fact" };
    public:
    IntentRecognizer() = default;
    ~IntentRecognizer() = default;

    string getIntent(string user_request);
};