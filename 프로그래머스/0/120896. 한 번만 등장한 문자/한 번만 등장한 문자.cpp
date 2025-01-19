#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> m;
    
    for(int i=0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    
    for(auto& iter : m)
    {
        if(iter.second == 1)
            answer += iter.first;
    }
        
    return answer;
}