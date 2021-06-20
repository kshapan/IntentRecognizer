#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

class IntentRecognizer
{
    regex regexForGetWeather{"([Ww]hat |[Hh]ow )?([Ii]s|[Ww]ill)(.*)?(weather|rain|storm|snow|hot|cold)(.*)?"};
    regex regexForGetCityWeather{"([Ww]hat|[Hh]ow) (is|will)(.*)?weather(.*)? in (.*)?"};
    regex regexForCheckCalender{"(free|appointment|meeting) at [0-9:]+ (AM|am|PM|PM)? (.*)?"};
    regex regexForGetFact{"\\b[Ff]act\\b"};
    std::vector<string> intents_of_request_{
    "Get Weather City",
    "Get Weather",
    "Check Calender",
    "Get Fact" };
    public:
    IntentRecognizer() = default;
    ~IntentRecognizer() = default;

    string getIntent(string user_request);
};