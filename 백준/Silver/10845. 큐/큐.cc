#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    queue<int> q;
    
    for(int i=0; i < t; i++)
    {
        string oper;
        cin >> oper;
        
        if(oper == "push")
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if(oper == "pop")
        {
            if(q.empty())
                cout << -1 << "\n";
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(oper == "size")
        {
            cout << q.size() << "\n";
        }
        else if(oper == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if(oper == "front")
        {
            if(q.empty())
                cout << -1 << "\n";
            else
                cout << q.front() << "\n";
        }
        else if(oper == "back")
        {
            if(q.empty())
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        }
    }
}