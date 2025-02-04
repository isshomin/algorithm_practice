#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    map<string, int> m = {{"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4},
                          {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}};

    string s1="", s2="", s3="";
    cin >> s1;
    cin >> s2;
    cin >> s3;
        
    long long answer = (m[s1] * 10 + m[s2]) * static_cast<long long>((pow(10, m[s3])));
    
    cout << answer;
    
}