#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<int> answer(n);
    for(auto& i : answer)
        cin >> i;
    
    sort(answer.begin(), answer.end());
    
    int total=0, now=0;
    
    total = accumulate(answer.begin(), answer.end(), 0, [&](int x, int t){
        now += t;
        return x + now;
    });
    
    cout << total;
}