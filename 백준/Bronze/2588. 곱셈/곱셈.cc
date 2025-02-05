#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int a, b = 0;
    cin >> a;
    cin >> b;
    
    string temp = to_string(b);
    int x = a * (temp[2] - '0');
    int y = a * (temp[1] - '0');
    int z = a * (temp[0] - '0');
    
    int answer = a * b;
    cout << x << "\n" << y << "\n" << z << "\n" << answer;
}