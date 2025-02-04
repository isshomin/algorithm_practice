#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t=0, y=0, m=0;
    cin >> t;
    
    for(int i=0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        
        y += (n / 30 + 1) * 10;
        m += (n / 60 + 1) * 15;
    }
    
    if(y == m)
        cout << "Y M " << y << "\n";
    else if(y > m)
        cout << "M " << m << "\n";
    else
        cout << "Y " << y << "\n";

}