#include <iostream>

using namespace std;

void func(int n)
{
    if(n == 1 || n % 3 == 1)
        cout << 'U';
    else if(n == 2 || n % 3 == 2)
        cout << 'O';
    else
        cout << 'S';
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    func(n);
}