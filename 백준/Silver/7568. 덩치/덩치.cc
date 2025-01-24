#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<pair<int, int>> hito(n);
    vector<int> rank(n, 1);
    
    for(int i=0; i < n; i++)
    {
        cin >> hito[i].first >> hito[i].second;
    }
    
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i == j)
                continue;
            if(hito[i].first < hito[j].first && hito[i].second < hito[j].second)
                rank[i]++;
        }
    }
    
    for(const auto& i : rank)
        cout << i << "\n";
}