#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, a=0, b=0, cnt=0;
    cin >> n;
    cin >> a >> b;
    
    cout << min(n, a / 2 + b);
}