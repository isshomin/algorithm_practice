#include <iostream>
#include <vector>

using namespace std;

void CalcPrime(int m, int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i=2; i*i <= n; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j <= n; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    
    for(int i=m; i <= n; i++)
    {
        if(isPrime[i])
            cout << i << "\n";
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    
    CalcPrime(m, n);
}