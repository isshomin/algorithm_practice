#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int h, w, n;
        cin >> h >> w >> n;
        
        if(h == 0)
            continue;
        
        int floor = (n - 1) % h + 1;
        int room =  (n - 1) / h + 1;
        
        cout << floor * 100 + room << endl;
    }
}