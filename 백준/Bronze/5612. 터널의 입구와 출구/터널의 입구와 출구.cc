#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n, m;
    cin >> n;
    cin >> m;
    
    int cur=m, max_car=m;
    
    for(int i=0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        cur += a - b;
        
        if(cur < 0)
        {
            cout << "0\n";
            return 0;
        }
        
        max_car = max(max_car, cur);
    }
    
    cout << max_car;
}