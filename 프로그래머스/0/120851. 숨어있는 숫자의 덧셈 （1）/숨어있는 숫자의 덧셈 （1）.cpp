#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(const auto& c : my_string)
    {
        if(c >= 49 && c <= 57)
            answer += c - '0';
    }
    return answer;
}