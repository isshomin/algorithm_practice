#include <iostream>
#include <vector>

using namespace std;

bool connected[101];
vector<int> graph[101];
int cnt = 0;

void dfs(int x)
{
    cnt++;
    connected[x] = true;
    for(auto& i : graph[x])
    {
        if(!connected[i])
            dfs(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n=0, m=0;
    cin >> n;
    cin >> m;
    
    for(int i=0; i < m; i++)
    {
        int a=0, b=0;
        cin >> a >> b;
        graph[a].emplace_back(b);
        graph[b].emplace_back(a);
    }
    
    dfs(1);
    cout << cnt - 1;
}