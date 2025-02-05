#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    int min=100001, answer=-1;
    
    for(int i=0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        
        int t = (a - 1) + (m - 1 - b);
        if(t < min)
        {
            min = t;
            answer = i + 1;
        }
    }
    
    cout << answer;
}