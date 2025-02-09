#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    int cnt = 0;
    while(n % 5 != 0 && n >= 2)
    {
        n -= 2;
        cnt++;
    }
    
    if(n % 5 == 0)
    {
        cnt += n / 5;
        n = 0;
    }
    
    if(n > 0 || cnt == 0)
        cout << -1;
    else
        cout << cnt;
}