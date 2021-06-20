#include <iostream>
#include <string>
#include "intent_recognizer.hpp"
using namespace std;

int main()
{
    string user_request{};
    IntentRecognizer intent_recognizer;

    while(1)
    {
        cout << "\nEnter your request or press q to exit" << endl;
        getline(cin, user_request);
        if(user_request.compare("q") == 0)
        {
            break;
        }
        else
        {
            cout << "\n" << intent_recognizer.getIntent(user_request) << "\n";
        }
    }
    return 0;
}