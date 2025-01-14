#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(const auto& v : strArr)
    {
        if(v.find("ad") == string::npos)
            answer.push_back(v);
    }
    return answer;
}