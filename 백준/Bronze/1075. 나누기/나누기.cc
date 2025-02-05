#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n, f = 0;
    cin >> n;
    cin >> f;
    
    n /= 100;
    n *= 100;
    
    while(n % f != 0)
    {
        n++;
    }
    
    int answer = n % 100;
    if(answer < 10)
        cout << "0";
    
    cout << answer;
        
}