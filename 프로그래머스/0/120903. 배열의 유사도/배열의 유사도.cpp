#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(const auto& v1 : s1)
    {
        for(const auto& v2 : s2)
        {
            if(v1 == v2)
            {
                answer++;
                break;
            }
        }
    }
    return answer;
}