#include <string>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> temp;
    
    for(auto& c : my_string)
    {
        if(temp.find(c) == temp.end())
        {
            answer += c;
            temp.insert(c);
        }
    }
    return answer;
}