#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int arr[100001] = {0};
    int n = 0;
    cin >> n;
    
    arr[1] = 1;
    arr[2] = 2;
    for(int i=3; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    }
    
    cout << arr[n];
}