#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> vec(n, vector<int>(m));
    queue<pair<int, int>> q;
    
    int cnt = 0;
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            cin >> vec[i][j];
            
            if(vec[i][j] == 1)
                q.push({i, j});
            else if(vec[i][j] == 0)
                cnt++;
        }
    }
    
    if(cnt == 0)
    {
        cout << 0;
        return 0;
    }
    
    int day = -1;
    while(!q.empty())
    {
        int qs = q.size();
        day++;
        
        for(int i=0; i < qs; i++)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int j=0; j < 4; j++)
            {
                int X = x + dx[j];
                int Y = y + dy[j];

                if(X >= 0 && X < n && Y >= 0 && Y < m && vec[X][Y] == 0)
                {
                    vec[X][Y] = 1;
                    q.push({X, Y});
                    cnt--;
                }
            }
        }
    }
    
    if(cnt > 0)
        cout << -1;
    else
        cout << day;
}