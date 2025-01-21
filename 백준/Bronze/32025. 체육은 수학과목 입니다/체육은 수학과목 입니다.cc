#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int h=0, w=0, r=0;
    cin >> h;
    cin >> w;
    r= (min(h,w) * 100) / 2;
    
    cout << r;
}