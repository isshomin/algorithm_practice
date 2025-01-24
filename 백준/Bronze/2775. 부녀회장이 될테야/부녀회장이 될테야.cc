#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    while(t--)
    {
        int k=0, n=0;
        cin >> k >> n;
        
        int arr[15][15] = {0};
        
        for(int i=1; i <= n; i++)
        {
            arr[0][i] = i;
        }
        
        for(int i=1; i <= k; i++)
        {
            for(int j=1; j <= n; j++)
                arr[i][j] = arr[i][j-1] + arr[i-1][j];
        }
        
        cout << arr[k][n] << "\n";
    }
 
}