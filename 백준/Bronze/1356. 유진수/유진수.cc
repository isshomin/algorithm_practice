#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string s;
    cin >> s;
    
    for(int i=1; i < s.size(); i++)
    {
        int left=1, right=1;
        
        for(int j=0; j < i; j++)
        {
            left *= s[j] - '0';
        }
        
        for(int j=i; j < s.size(); j++)
        {
            right *= s[j] - '0';
        }
        
        if(left == right)
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    
}