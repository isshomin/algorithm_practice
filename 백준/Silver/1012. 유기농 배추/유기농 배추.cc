#include <iostream>
#include <vector>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y, vector<vector<int>> &vec)
{
    vec[x][y] = 0;
    
    for(int i=0; i < 4; i++)
    {
        int X = x + dx[i];
        int Y = y + dy[i];
        
        if (X >= 0 && X < vec.size() && Y >= 0 && Y < vec[0].size() && vec[X][Y] == 1)
            dfs(X, Y, vec);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    
    for(int i=0; i < t; i++)
    {
        int m, n, k;
        cin >> m >> n >> k;
        
        vector<vector<int>> vec(n, vector<int>(m, 0));
        for(int j=0; j < k; j++)
        {
            int a, b;
            cin >> b >> a;
            vec[a][b] = 1;
        }
        
        int cnt = 0;
        
        for(int j=0; j < n; j++)
        {
            for(int l=0; l < m; l++)
            {
                if(vec[j][l] == 1)
                {
                    cnt++;
                    dfs(j, l, vec);
                }
            }
        }
        
        cout << cnt << "\n";
    }
}