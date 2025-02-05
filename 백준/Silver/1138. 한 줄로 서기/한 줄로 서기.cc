#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for(int i=1; i <= n; i++)
    {
        int m;
        cin >> m;
        
        for(int j=0; j < n; j++)
        {
            if(m == 0 && vec[j] == 0)
            {
                vec[j] = i;
                break;
            }
            
            if(vec[j] == 0)
                m--;
        }
    }
    
    for(const auto& i : vec)
    {
        cout << i << " ";
    }
}