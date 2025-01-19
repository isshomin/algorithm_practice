#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
 
    int n;
    cin >> n;
    
    for(int i=1; i < n; i++)
    {
        int temp = i, total = i;
        
        while(temp != 0)
        {
            total += temp % 10;
            temp /= 10;
        }
        
        if(total == n)
        {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0;
}