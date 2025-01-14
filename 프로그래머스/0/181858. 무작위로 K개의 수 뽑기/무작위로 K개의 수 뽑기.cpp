#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(const auto& i : arr)
    {
        if(find(answer.begin(), answer.end(), i) == answer.end())
            answer.emplace_back(i);
    }
    answer.resize(k, -1);
    return answer;
}