#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int temp= b/a, answer=(temp*3)*c;
    
    cout << answer;
    
}