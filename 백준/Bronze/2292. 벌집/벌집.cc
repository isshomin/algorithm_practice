#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;

    int cnt=1, ran=1;
    
    while(n > ran)
    {
        ran += 6 * cnt;
        cnt++;
    }
    
    cout << cnt;
}