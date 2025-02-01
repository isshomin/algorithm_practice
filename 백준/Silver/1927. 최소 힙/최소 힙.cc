#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    while(n--)
    {
        int x = 0;
        cin >> x;
        
        if(x > 0)
            pq.push(x);
        else
        {
            if(pq.empty())
                cout << "0\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}