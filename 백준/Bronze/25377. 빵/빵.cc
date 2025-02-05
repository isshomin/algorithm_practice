#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    
    int answer = 1001;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        if(a <= b)
        {
            if (b < answer)
                answer =b;
        }
    }
    
    if(answer == 1001)
        cout << "-1\n";
    else
        cout << answer;
}