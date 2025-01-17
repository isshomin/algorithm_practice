#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    int answer[10] = {};
    string s = to_string(a*b*c);
    
    for(const auto& c : s)
    {
        answer[c - '0']++;
    }
    
    for(int i=0; i < 10; i++)
        cout << answer[i] << endl;
}