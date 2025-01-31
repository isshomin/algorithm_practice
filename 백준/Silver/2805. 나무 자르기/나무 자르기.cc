#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    long long n=0, m=0;
    int arr[1000001] = {0};
    long long answer = 0;
    
    cin >> n >> m;
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    
    long long l=0, h=arr[n-1];
    
    while(l <= h)
    {
        long long total = 0;
        long long temp = (l + h) / 2;
        
        for(int i=0; i < n; i++)
        {
            if(arr[i] - temp > 0)
                total += arr[i] - temp;
        }
        
        if(total >= m)
        {
            answer = temp;
            l = temp + 1;
        }
        else
            h = temp - 1;
    }
    
    cout << answer;

    
}