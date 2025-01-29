#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;

    for(int i=1; i <= t; i++)
    {
        long long n=0, m=0;
        cin >> n >> m;

        long long total = (m * (m + 1) / 2) - ((n - 1) * n / 2);

        cout << "Scenario #" << i << ":\n" << total << "\n";
        
        if(i < t) 
            cout << "\n";
    }


}
