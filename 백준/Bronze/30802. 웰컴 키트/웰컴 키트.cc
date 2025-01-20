#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n=0, t=0, p=0, size[6]={0}, cnt=0;
    
    cin >> n;
    for(auto& i : size)
    {
        cin >> i;
    }
    
    cin >> t >> p;
    for(const auto& i : size)
    {
        if(i % t == 0)
            cnt += i / t;
        else
            cnt += i / t + 1;
    }
    
    cout << cnt << "\n";
    cout << n / p << " " << n % p;
}