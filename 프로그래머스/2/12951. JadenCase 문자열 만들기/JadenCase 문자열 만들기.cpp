#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool temp = true;
    
    for(auto& c : s)
    {
        if(c == ' ')
        {
            answer += c;
            temp = true;
        }
        else if(temp)
        {
            answer += toupper(c);
            temp = false;
        }
        else
            answer += tolower(c);
    }
    return answer;
}