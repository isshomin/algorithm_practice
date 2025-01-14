#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> len(31,0);
    for(const auto& s : strArr)
    {
        len[s.size()]++;
        answer = max(answer, len[s.size()]);
    }
    return answer;
}