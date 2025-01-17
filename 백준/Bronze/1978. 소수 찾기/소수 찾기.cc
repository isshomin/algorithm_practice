#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    vector<int> nums(t);
    
    for(auto& i : nums)
        cin >> i;
    
    int cnt = 0;
    
    for(auto& n : nums)
    {
        if(n <= 1)
            continue;
        
        bool prime = true;
        for(int i=2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                prime = false;
                break;
            }
        }
        
        if(prime)
            cnt++;
    }
        
    cout << cnt;
}