#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string add(string a, string b) 
{
    string answer = "";
    int temp=0, sum=0;

    while(a.length() < b.length()) 
        a = "0" + a;
    while(b.length() < a.length()) 
        b = "0" + b;

    for(int i=a.length()-1; i >= 0; i--) 
    {
        sum = (a[i] - '0') + (b[i] - '0') + temp;
        temp = sum / 10;
        answer += (sum % 10) + '0';
    }

    if(temp) 
        answer += temp + '0';

    reverse(answer.begin(), answer.end());
    return answer;
}

int main() 
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string a="", b="";
    cin >> a >> b;
    cout << add(a, b) << "\n";
}
