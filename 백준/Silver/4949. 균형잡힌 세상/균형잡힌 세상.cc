#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isTrue(const string& s)
{
    stack<char> st;
    
    for(auto c : s)
    {
        if(c == '(' || c == '[')
            st.push(c);
        else if(c == ')')
        {
            if(st.empty() || st.top() != '(')
                return false;
            
            st.pop();
        }
        else if(c == ']')
        {
            if(st.empty() || st.top() != '[')
                return false;
            
            st.pop();
        }
    }
    
    return st.empty();
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string s;
    while(1)
    {
        getline(cin, s);
        
        if(s == ".")
            break;
        
        if(isTrue(s))
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
}