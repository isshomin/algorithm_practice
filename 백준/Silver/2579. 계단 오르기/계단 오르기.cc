#include <iostream>

int n = 0;
int arr[301]={0}, answer[301]={0};


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    answer[0] = arr[0];
    answer[1] = max(arr[1], arr[0] + arr[1]);
    answer[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
    
    for(int i=3; i < n; i++)
    {
        answer[i] = max(arr[i] + answer[i - 2], arr[i] + arr[i - 1] + answer[i - 3]);
    }
    
    cout << answer[n - 1];
}