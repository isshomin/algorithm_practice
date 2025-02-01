#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<int> answer(n);
    for(int i=0; i < n; i++)
    {
        cin >> answer[i];
    }
    
    vector<int> temp = answer;
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    
    unordered_map<int, int> um;
    for(int i=0; i < temp.size(); i++)
    {
        um[temp[i]] = i;
    }
    
    for(const auto& v : answer)
    {
        cout << um[v] << "\n";
    }
    
}