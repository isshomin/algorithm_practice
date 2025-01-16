#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string func(int m, int n)
{
    string answer = "";
    string arr = "0123456789ABCDEF";
    
    if(m == 0)
        return "0";
    
    while(m > 0)
    {
        answer += arr[m % n];
        m /= n;
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}

int main()
{
    int m, n;
    cin >> m >> n;
    
    cout << func(m, n) << endl;
    
    return 0;
}