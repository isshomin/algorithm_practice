#include <iostream>
#include <algorithm>

using namespace std;

int a[51]={0}, b[51]={0};

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for(int i=0; i < n; i++)
    {
        cin >> b[i];
    }
    
    sort(a, a+n, greater<int>());
    sort(b, b+n);
    
    int answer = 0;
    for(int i=0; i < n; i++)
    {
        answer += a[i] * b[i];
    }
    
    cout << answer;
}