#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    

    while(t--)
    {
        string s;
        cin >> s;
        
        stack<char> answer;
        for(int i = 0; i < s.size(); i++)
        {
            if(answer.empty())
                answer.push(s[i]);
            else
            {
                if((answer.top() == '(' && s[i] == ')'))
                    answer.pop();
                else
                    answer.push(s[i]);
            }
        }
        cout << (answer.empty() ? "YES" : "NO") << endl;
    }
}