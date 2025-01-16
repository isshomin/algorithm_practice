#include <iostream>

using namespace std;

int main()
{
    int sleep, wake;
    cin >> sleep >> wake;
    
    int answer = 0;
    if(wake >= sleep)
        answer = wake - sleep;
    else
        answer = (24 - sleep) + wake;
    
    cout << answer;
    
    return 0;
}