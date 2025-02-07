#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int graph[1001][1001] = {0};
bool visited[1001][1001] = {0};
int answer[1001][1001] = {0}; 
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n, m;

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    answer[x][y] = 0;
    
    while(!q.empty())
    {
        pair<int, int> temp = q.front();
        for(int i=0; i < 4; i++)
        {
            int nx = temp.first + dx[i];
            int ny = temp.second + dy[i];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            
            if(graph[nx][ny] == 1 && !visited[nx][ny])
            {
                q.push({nx, ny});
                visited[nx][ny] = true;
                answer[nx][ny] = answer[temp.first][temp.second] + 1;
            }
        }
        
        q.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    cin >> n >> m;
    
    int x=0, y=0, num=0;
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            cin >> num;
            graph[i][j] = num;
            
            if(num == 2)
            {
                x = i;
                y = j;
            }
        }
    }
    
    bfs(x, y);
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            if(answer[i][j] == 0 && graph[i][j] == 1)
                cout << -1 << ' ';
            else
                cout << answer[i][j] << ' ';
        }
        
        cout << "\n";
    }
}