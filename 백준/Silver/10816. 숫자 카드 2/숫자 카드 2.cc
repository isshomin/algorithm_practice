#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0, t=0;
    cin >> n;
    
    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    
    cin >> m;
    for(int i=0; i < m; i++)
    {
        cin >> t;
        cout << upper_bound(arr, arr + n, t) - lower_bound(arr, arr + n, t) << " ";
    }
}