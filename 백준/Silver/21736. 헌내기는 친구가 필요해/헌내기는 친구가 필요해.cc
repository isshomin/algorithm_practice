#include <iostream>
#include <queue>
#include <string>

using namespace std;

int n, m;

char arr[600][600];
bool visited[600][600];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    
    int cnt = 0;
    
    while(!q.empty())
    {
        int X = q.front().first;
        int Y = q.front().second;
        q.pop();
        
        if(arr[X][Y] == 'P')
            cnt++;
        
        for(int i=0; i < 4; i++)
        {
            int nx = X + dx[i];
            int ny = Y + dy[i];
            
            if(nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if(!visited[nx][ny] && arr[nx][ny] != 'X')
                {
                    q.push({nx, ny});
                    visited[nx][ny] = true;
                }
            }
        }
    }
    
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int x=0, y=0;
    cin >> n >> m;
    
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 'I')
            {
                x = i;
                y = j;
            }
        }
    }
    
    int answer =bfs(x, y);
    
    if(answer == 0)
        cout << "TT";
    else
        cout << answer;
}