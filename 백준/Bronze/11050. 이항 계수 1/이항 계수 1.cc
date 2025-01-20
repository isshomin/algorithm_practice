#include <iostream>

using namespace std;

long long factorial(int n)
{
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, k=0;
    cin >> n >> k;
    
    long long answer = 0;
    answer = factorial(n) / (factorial(k) * factorial(n - k));
    
    cout << answer;
}