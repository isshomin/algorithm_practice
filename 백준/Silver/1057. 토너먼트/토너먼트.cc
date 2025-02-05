#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t, a, b;
    cin >> t >> a >> b;
    
    int cnt = 0;
    while(a != b)
    {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        cnt++;
    }
    
    cout << cnt;
}