#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string s = "";
    
    while(1)
    {
        cin >> s;
        if(s == "0")
            break;
        
        bool isTrue = true;
        for(int i=0; i < s.size()/2; i++)
        {
            if(s[i] != s[s.size() -1 -i])
            {
                isTrue = false;
                break;
            }
        }
        cout << (isTrue == true ? "yes" : "no") << "\n";
    }
}