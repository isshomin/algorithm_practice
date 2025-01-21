#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    int n = 666;
    string answer = "";
    while(t > 0)
    {
        answer = to_string(n);
        if(answer.find("666") != string::npos)
        {
            t--;
        }
        
        n++;
    }
    
    cout << answer; 
}