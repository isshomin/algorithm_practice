#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<int> answer(n + 1, 0);
    for(int i=2; i <= n; i++)
    {
        answer[i] = answer[i - 1] + 1;
        
        if(i % 2 == 0)
            answer[i] = min(answer[i], answer[i / 2] + 1);
        
        if(i % 3 == 0)
            answer[i] = min(answer[i], answer[i / 3] + 1);
    }
    
    cout << answer[n];
}
