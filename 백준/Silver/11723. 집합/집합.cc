#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    int mask = 0;
    while(t--)
    {
        int n = 0;
        string s = "";
        cin >> s;
        
        if(s == "add")
        {
            cin >> n;
            mask |= (1 << (n - 1));
        }
        else if(s == "remove")
        {
            cin >> n;
            mask &= ~(1 << (n - 1));
        }
        else if(s == "check")
        {
            cin >> n;
            cout << ((mask & (1 << (n - 1))) ? 1 : 0) << "\n";
        }
        else if(s == "toggle")
        {
            cin >> n;
            mask ^= (1 << (n - 1));
        }
        else if(s == "all")
        {
            mask = (1 << 20) - 1;
        }
        else if(s == "empty")
        {
            mask = 0;
        }
    }
    
}