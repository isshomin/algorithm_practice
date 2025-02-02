#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string s;
    
    while(1)
    {
        int cnt = 0;
        getline(cin, s);
        
        if(s == "#")
            break;
        
        for(int i=0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
            
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt++;
        }
        
        cout << cnt << "\n";
        
    }
}