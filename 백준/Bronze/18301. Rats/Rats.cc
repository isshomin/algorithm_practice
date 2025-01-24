#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int a=0, b=0, c=0;
    double answer = 0;
    cin >> a >> b >> c;
    
    answer = floor(((a + 1) * (b + 1)) / (c + 1)) - 1;
    
    cout << answer;
}