#include <iostream>

using namespace std;

long long func(int n, int m)
{
    if(m > n - m)
        m = n - m;
    
    long long answer = 1;
    for(int i=0; i < m; i++)
    {
        answer *= (n - i);
        answer /= (i + 1);
    }
    
    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        cout << func(m, n) << "\n";
    }
}
