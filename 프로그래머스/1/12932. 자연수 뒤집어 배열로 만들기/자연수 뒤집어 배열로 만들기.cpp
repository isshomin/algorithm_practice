#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s = to_string(n);
    
    reverse(s.begin(), s.end());
    
    for(char c : s)
    {
        answer.push_back((c - '0'));
    }
    return answer;
}