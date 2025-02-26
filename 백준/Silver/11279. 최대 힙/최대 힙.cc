#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    priority_queue<int> pq;
    int n, num;
    cin >> n;
    
    while(n--)
    {
        cin >> num;
        
        if(num == 0)
        {
            if(pq.empty())
            {
                cout << 0 << "\n";
                continue;
            }
            
            cout << pq.top() << "\n";
            pq.pop();
        }
        else
            pq.push(num);
    }
    
}