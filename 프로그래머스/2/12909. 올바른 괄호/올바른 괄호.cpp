#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> temp;

    for(int i=0; i < s.size(); i++)
    {
        if(temp.empty())
            temp.push(s[i]);
        else
        {
            if(temp.top() == '(' && s[i] == ')')
                temp.pop();
            else
                temp.push(s[i]);
        }     
    }
    
    if(!temp.empty())
        answer = false;

    return answer;
}