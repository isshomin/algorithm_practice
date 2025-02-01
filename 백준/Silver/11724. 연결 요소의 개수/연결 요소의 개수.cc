#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1001];
bool arr[1001];

void func(int node)
{
    arr[node] = true;
    
    for(int i : graph[node])
    {
        if(!arr[i])
            func(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0;
    cin >> n >> m;
    
    for(int i=0; i < m; i++)
    {
        int x=0, y=0;
        cin >> x >> y;
        graph[x].emplace_back(y);
        graph[y].emplace_back(x);
    }
    
    int cnt = 0;
    for(int i=1; i <= n; i++)
    {
        if(!arr[i])
        {
            func(i);
            cnt++;
        }
    }
    
    cout << cnt << "\n";
}