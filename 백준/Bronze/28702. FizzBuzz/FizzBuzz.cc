#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string a="", b="" , c="";
    cin >> a >> b >> c;
    
    int n = 0;
    if((c[0] >= '0' && c[0] <= '9'))
        n = stoi(c) + 1;
    else if(b[0] >= '0' && b[0] <= '9')
        n = stoi(b) + 2;
    else if(a[0] >= '0' && a[0] <= '9')
        n = stoi(a) + 3;
    
    if(n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz";
    else if(n % 3 == 0)
        cout << "Fizz";
    else if(n % 5 == 0)
        cout << "Buzz";
    else
        cout << n;
}