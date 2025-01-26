#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0;
    cin >> n >> m;

    set<string> a;
    vector<string> b;
    
    for(int i=0; i < n; i++)
    {
        string name;
        cin >> name;
        a.insert(name);
    }
    
    for(int i=0; i < m; i++)
    {
        string name;
        cin >> name;
        
        if(a.find(name) != a.end())
            b.emplace_back(name);
    }
    
    sort(b.begin(), b.end());
    
    cout << b.size() << "\n";
    for(const auto& s : b)
        cout << s << "\n";
}
