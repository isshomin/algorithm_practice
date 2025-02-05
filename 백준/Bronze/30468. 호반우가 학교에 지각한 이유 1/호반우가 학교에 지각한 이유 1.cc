#include <iostream>
#include <algorithm>

using namespace std;

void func(int s, int d, int i, int l, int n)
{
    int arr[4] = {s, d, i, l};
    int avg = (s + d + i + l) / 4;
    if(avg >= n)
    {
        cout << "0\n";
        return;
    }
    
    int cnt = 0;
    while(avg < n)
    {
        sort(arr, arr + 4);
        
        arr[0]++;
        cnt++;
        
        avg = (arr[0] + arr[1] + arr[2]+ arr[3]) / 4;
    }
    
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int s, d, i, l, n;
    cin >> s >> d >> i >> l >> n;
    
    func(s, d, i, l, n);
    
}