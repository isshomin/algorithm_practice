#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(const auto ch : my_string)
    {
        if(ch != letter[0])
            answer += ch;
    }
    
    return answer;
}