#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    
    cout << gcd(m, n) << "\n" << lcm(m, n);
}