#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for(int i=1; i*k <= n; i++)
    {
        answer.push_back(i*k);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}