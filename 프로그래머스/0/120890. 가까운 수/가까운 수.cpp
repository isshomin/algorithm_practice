#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    vector<pair<int, int>> answer;
    
    for(const auto& v : array)
    {
        answer.push_back(make_pair(abs(v - n), v));
    }
    
    sort(answer.begin(), answer.end());
    
    return answer[0].second;
}