#include <iostream>
#include <queue>

using namespace std;

int bfs(int n, int k)
{
    queue<pair<int, int>> q;
    bool visited[100001] = {false};
    
    q.push({n, 0});
    visited[n] = true;
    
    while(!q.empty())
    {
        int pos = q.front().first;
        int t = q.front().second;
        q.pop();
        
        if(pos == k)
            return t;
        
        int n_pos[3] = {pos - 1, pos + 1, pos * 2};
        
        for(const auto& i : n_pos)
        {
            if(i >= 0 && i <= 100001 && !visited[i])
            {
                q.push({i, t + 1});
                visited[i] = true;
            }
        }
    }
    
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    cout << bfs(n, k);
}