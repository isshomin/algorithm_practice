#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0;
    unordered_map<string, string> um;
    string a="", b="";
    
    cin >> n >> m;
    
    for(int i=0; i < n; i++)
    {
        cin >> a >> b;
        um[a] = b;
    }
    
    for(int i=0; i < m; i++)
    {
        cin >> a;
        
        cout << um[a] << "\n";
    }
}