#include <iostream>
#include <cmath>

using namespace std;

int func(int n, int r, int c)
{
    if(n == 0)
        return 0;
    
    int half = 1 << (n -1);
    int quad = 0;
    
    if(r < half && c < half)
        quad = 0;
    else if(r < half && c >= half)
    {
        quad = 1;
        c -= half;
    }
    else if(r >= half && c < half)
    {
        quad = 2;
        r -=half;
    }
    else
    {
        quad = 3;
        r -= half;
        c -= half;
    }
    
    return quad * pow(half, 2) + func(n - 1, r, c);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n, r, c;
    cin >> n >> r >> c;
    
    cout << func(n, r, c) << "\n";
    
}