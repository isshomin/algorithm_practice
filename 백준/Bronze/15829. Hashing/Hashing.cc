#include <iostream>
#include <string>

using namespace std;

const int MOD = 1234567891;
const int R = 31;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    string s = "";
    cin >> s;
    
    long long hash=0, ri=1;
    
    for(int i=0; i < n; i++)
    {
        int ai = s[i] - 'a' + 1;
        hash = (hash + ai * ri) % MOD;
        ri = (ri * R) % MOD;
    }
    
    cout << hash << "\n";
}