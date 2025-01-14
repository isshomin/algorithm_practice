#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    int a = 4500, b = 5000;
    for(const auto& s : order)
    {
        if(s.find("cano") != string::npos || s == "anything")
        {
            answer += a;
        }
        else if(s.find("latte") != string::npos)
        {
            answer += b;
        }
    }
    return answer;
}