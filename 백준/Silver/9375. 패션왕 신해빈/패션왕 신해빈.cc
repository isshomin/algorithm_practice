#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    
    for(int i=0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        
        map<string , int> m;
        for(int j=0; j < n; j++)
        {
            string s1="", s2="";
            cin >> s1;
            cin >> s2;
            m[s2]++;
        }
        
        int total = 1;
        for(auto& i : m)
        {
            total *= i.second + 1;
        }
        
        cout << total - 1 << "\n";
    }
}