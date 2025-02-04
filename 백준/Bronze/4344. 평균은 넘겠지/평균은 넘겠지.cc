#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        
    int t = 0;
    cin >> t;

    for(int i=0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        
        int *arr = new int[n];
        for(int j=0; j < n; j++)
        {
            cin >> arr[j];
        }
        
        double temp = 0;
        for(int j=0; j < n; j++)
        {
            temp += arr[j];
        }
        
        temp /= n;
        
        double cnt = 0;
        for(int j=0; j < n; j++)
        {
            if(arr[j] > temp)
                cnt++;
        }
        
        double answer = (cnt / n) * 100;
        cout << fixed;
        cout.precision(3);
        cout << answer << "%\n";
        
        delete[] arr;
    }
}