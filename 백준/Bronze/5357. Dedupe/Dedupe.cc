#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<string> answer(n);
    for(int i=0; i < n; i++)
    {
        cin >> answer[i];
        
        answer[i].erase(unique(answer[i].begin(), answer[i].end()), answer[i].end());
    }
    
    
    
    for(const auto& s : answer)
    {
        cout << s << "\n";
    }
}