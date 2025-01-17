#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    string s = to_string(a) + to_string(b);
    int d = stoi(s);
    
    
    cout << a+b-c << endl;
    
    cout << d-c; 
    
    
}