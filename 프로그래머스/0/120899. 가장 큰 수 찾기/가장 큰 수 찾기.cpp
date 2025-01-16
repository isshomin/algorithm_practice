#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    auto max_iter = max_element(array.begin(), array.end());
    
    answer.emplace_back(*max_iter);
    answer.emplace_back(distance(array.begin(), max_iter));
    
    return answer;
}