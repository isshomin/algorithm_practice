#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    string word;
    int cnt = 0;
    
    while(ss >> word)
    {
        cnt++;
    }
    
    cout << cnt;
}