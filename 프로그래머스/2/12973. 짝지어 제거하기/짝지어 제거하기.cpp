#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> s1;
    for(const auto& c : s)
    {
        if(s1.empty())
            s1.push(c);
        else if(s1.top() == c)
            s1.pop();
        else
            s1.push(c);
    }
    
    return s1.empty();
}