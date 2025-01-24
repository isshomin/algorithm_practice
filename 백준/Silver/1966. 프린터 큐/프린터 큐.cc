#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    
    while(t--)
    {
        int n=0, m=0;
        cin >> n >> m;
        
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        
        for(int i=0; i < n; i++)
        {
            int rank = 0;
            cin >> rank;
            q.push({rank, i});
            pq.push(rank);
        }
        
        int order = 0;
        
        while(!q.empty())
        {
            int c_p = q.front().first;
            int c_i = q.front().second;
            q.pop();
            
            if(c_p == pq.top())
            {
                order++;
                pq.pop();
                
                if(c_i == m)
                {
                    cout << order << "\n";
                    break;
                }
            }
            else
                q.push({c_p, c_i});
        }
    }
}