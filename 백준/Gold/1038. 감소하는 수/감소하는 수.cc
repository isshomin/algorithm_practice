#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<long long> vec;
    for(int i=0; i <= 9; i++)
    {
        vector<string> num = {to_string(i)};
        
        while(!num.empty())
        {
            string s = num.back();
            num.pop_back();
            
            string temp = s;
            reverse(temp.begin(), temp.end());
            vec.push_back(stoll(temp));
            
            if(s.back() < '9')
            {
                for(int j = s.back()-'0'+1; j <= 9; j++)
                {
                    num.push_back(s + to_string(j));
                }
            }
        }
    }
    
    sort(vec.begin(), vec.end());
    
    cout << (n >= vec.size() ? -1 : vec[n]);
}