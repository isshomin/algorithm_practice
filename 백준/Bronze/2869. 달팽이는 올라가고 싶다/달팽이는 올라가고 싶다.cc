#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a=0, b=0, v=0;
    cin >> a >> b >> v;
    
    int day = a - b;
    int remain = v - a;    
    
    int answer = (remain > 0) ? ceil(static_cast<double>(remain) / day) + 1 : 1;
    
    cout << answer;
    
}