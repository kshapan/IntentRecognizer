#include "intent_recognizer.hpp"

string IntentRecognizer::getIntent(string user_request)
{
    string intent = "Intent Not Determined";

    if(regex_match(user_request, regexForGetWeather))
    {
        intent = intents_of_request_[0];
    }
    else if (regex_match(user_request, regexForGetCityWeather))
    {
        intent = intents_of_request_[1];
    }
    else if (regex_search(user_request, regexForCheckCalender))
    {
        intent = intents_of_request_[2];
    }
    else if (regex_search(user_request, regexForGetFact))
    {
        intent = intents_of_request_[3];
    }
    else
    {
        // return error
    }

    return intent;
}