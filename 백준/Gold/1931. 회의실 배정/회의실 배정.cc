#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> vec;
    for(int i=0; i < n; i++)
    {
        int a, b;
        cin >> b >> a;
        vec.emplace_back(make_pair(a, b));
    }
    
    sort(vec.begin(), vec.end());
    
    int temp = vec[0].first;
    int answer = 1;
    for(int i=1; i <= n; i++)
    {
        if(vec[i].second >= temp)
        {
            answer++;
            temp = vec[i].first;
        }
    }
    
    cout << answer;
}