#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    stack<int> st;
    
    for(int i=0; i < t; i++)
    {
        int n;
        string oper;
        cin >> oper;
        
        if(oper == "push")
        {
            cin >> n;
            st.push(n);
        }
        else if(oper == "pop")
        {
            if(st.empty() == 1)
                cout << -1 << "\n";
            else
            {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if(oper == "size")
        {
            cout << st.size() << "\n";
        }
        else if(oper == "empty")
        {
            cout << st.empty() << "\n";
        }
        else if(oper == "top")
        {
            if(st.empty() == 1)
                cout << -1 << "\n";
            else
                cout << st.top() << "\n";
        }
        
    }
}