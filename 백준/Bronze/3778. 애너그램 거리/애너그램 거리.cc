#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int func(const string& a, const string& b)
{
    vector<int> vec1(26, 0), vec2(26, 0);
    
    for(auto& c : a)
    {
        vec1[c - 'a']++;
    }
    
    for(auto& c : b)
    {
        vec2[c - 'a']++;
    }
    
    int dist = 0;
    for(int i=0; i < 26; i++)
    {
        dist += abs(vec1[i] - vec2[i]);
    }
    
    return dist;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    cin.ignore();
    
    for(int i=1; i <= n; i++)
    {
        string s1="", s2="";
        getline(cin, s1);
        getline(cin, s2);
        
        int answer = func(s1, s2);
        
        cout << "Case #" << i << ": " << answer << "\n";
    }
}