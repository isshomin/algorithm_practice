#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int toSec(const string& t)
{
    return stoi(t.substr(0, 2)) * 3600 + stoi(t.substr(3, 2)) * 60 + stoi(t.substr(6, 2));
}

string toTime(int sec)
{
    int h=sec/3600, m=(sec%3600)/60, s=sec%60;
    return (h < 10 ? "0" : "") + to_string(h) + ":" + 
           (m < 10 ? "0" : "") + to_string(m) + ":" + 
           (s < 10 ? "0" : "") + to_string(s);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    string a="", b="";
    cin >> a >> b;
    
    int sec = toSec(a);
    int sec2 = toSec(b);
    int answer = (sec2 - sec + 86400) % 86400;
    
    cout << toTime(answer);
}