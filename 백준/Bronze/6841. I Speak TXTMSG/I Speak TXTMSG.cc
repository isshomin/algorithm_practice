#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    unordered_map<string, string> um = {
        {"CU", "see you"},
        {":-)", "I’m happy"},
        {":-(", "I’m unhappy"},
        {";-)", "wink"},
        {":-P", "stick out my tongue"},
        {"(~.~)", "sleepy"},
        {"TA", "totally awesome"},
        {"CCC", "Canadian Computing Competition"},
        {"CUZ", "because"},
        {"TY", "thank-you"},
        {"YW", "you’re welcome"},
        {"TTYL", "talk to you later"}
    };
    
    while(1)
    {
        string s;
        cin >> s;
        
        if(um.count(s))
            cout << um[s] << "\n";
        else
            cout << s << "\n";
        
        if(s == "TTYL")
            break;
    }
}