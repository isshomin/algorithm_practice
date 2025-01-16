#include <iostream>

using namespace std;

int func(int a, int b, int x) 
{
    return a * (x - 1) + b;
}

int main() 
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        int a, b, x;
        cin >> a >> b >> x;
        cout << func(a, b, x) << endl;
    }

    return 0;
}
