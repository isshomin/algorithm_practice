#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    for(int i=0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        vector<int> answer(n + 1, 0);
        
        answer[0] = 1;
        answer[1] = 1;
        answer[2] = 2;
        answer[3] = 4;
        
        for(int j=4; j <= n; j++)
        {
            answer[j] = answer[j - 1] + answer[j - 2] + answer[j - 3];
        }
        
        cout << answer[n] << "\n";
    }
    
    
}