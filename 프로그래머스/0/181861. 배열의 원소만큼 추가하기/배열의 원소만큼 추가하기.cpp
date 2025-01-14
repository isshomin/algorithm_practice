#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(const auto& v : arr)
    {
        for(int i=0; i < v; i++)
            answer.emplace_back(v);
    }
    return answer;
}