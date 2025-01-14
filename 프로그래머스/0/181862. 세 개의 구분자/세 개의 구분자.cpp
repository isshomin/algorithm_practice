#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    for(int i=0; i < myStr.length(); i++)
    {
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c')
            temp += myStr[i];
        else if(!temp.empty())
        {
            answer.emplace_back(temp);
            temp = "";
        }
    }
    if(!temp.empty())
        answer.emplace_back(temp);
    
    return !answer.empty() ? answer : vector<string>{"EMPTY"};
}