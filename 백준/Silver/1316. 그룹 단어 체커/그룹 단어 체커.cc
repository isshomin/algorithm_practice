#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    int cnt = 0;
    while(n--)
    {
        string s;
        cin >> s;
     
        bool arr[26] = {false};
        bool isTrue = true;
        
        for(int i=0; i < s.size(); i++)
        {
            if(arr[s[i] - 'a'])
            {
                if(s[i] != s[i-1])
                {
                    isTrue = false;
                    break;
                }
            }
            
            arr[s[i] - 'a'] = true;
        }
        
        if(isTrue)
            cnt++;
    }
    
    cout << cnt;
}