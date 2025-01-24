#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int k=0, n=0;
    cin >> k >> n;
    
    vector<int> vec(k);
    for(auto& i : vec)
        cin >> i;
    
    long long low=1, high=*max_element(vec.begin(), vec.end()), answer=0;
     
    while(low <= high)
    {
        long long mid = (low + high) / 2;
        long long cnt = 0;
        
        for(auto& i : vec)
            cnt += i / mid;
        
        if(cnt >= n)
        {
            answer = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    
    cout << answer;
}