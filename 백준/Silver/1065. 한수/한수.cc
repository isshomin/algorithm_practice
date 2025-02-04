#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, cnt=99;
    cin >> n;
    
    if(n < 100)
        cout << n;
    else if(n == 1000)
        cout << 144;
    else
    {
        int a=0, b=0, c=0;
        for(int i=100; i <= n; i++)
        {
            a = i % 10;
            b = (i / 10) % 10;
            c = (i / 100) % 10;
            
            if(c - b == b - a)
                cnt++;
        }
        
        cout << cnt;
    }
    
}