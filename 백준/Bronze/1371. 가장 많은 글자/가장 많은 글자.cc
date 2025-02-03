#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    map<char , int> m;
    string s = "";
    
    while(getline(cin, s))
    {
        for(auto& c : s)
        {
            if(c >= 'a' && c <= 'z')
                m[c]++;
        }
    }
    
    int cnt = 0;
    for(const auto& p : m)
    {
        cnt = max(cnt, p.second);
    }
    
    for(const auto& p : m)
    {
        if(p.second == cnt)
            cout << p.first;
    }
}