#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(const auto& v : intervals)
    {
        for(int i=v[0]; i <= v[1]; i++)
        {
            answer.emplace_back(arr[i]);
        }
    }
    return answer;
}