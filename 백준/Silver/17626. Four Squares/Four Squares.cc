#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAX = 50001;
int dp[MAX];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int num;
    cin >> num;
    
    for(int i=1; i*i <= num; i++)
    {
        dp[i * i] = 1;
    }
    
    for(int i=1; i <= num; i++)
    {
        if(dp[i] == 1) 
            continue;
        
        int min_cnt = num;
        
        for(int j=1; j*j <= i; j++)
        {
            int temp = dp[j * j] + dp[i - j * j];
            min_cnt = min(min_cnt, temp);
        }
        
        dp[i] = min_cnt;
    }
    
    cout << dp[num];
    
}
