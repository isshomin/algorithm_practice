#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, k=0;
    cin >> n >> k;
    
    vector<int> answer(n);
    for(auto& i : answer)
        cin >> i;
    
    int cnt = 0;
    
    for(int i=n-1; i >= 0; i--)
    {
        if(answer[i] <= k)
        {
            cnt += k / answer[i];
            k %= answer[i];
        }
    }
    
    cout << cnt;
}