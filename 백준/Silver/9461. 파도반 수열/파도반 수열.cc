#include <iostream>

using namespace std;

long long p[100] = {0};

int main()
{
    int t = 0;
    cin >> t;
    
    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    
    for(int i=0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        
        for(int j=3; j < n; j++)
        {
            p[j] = p[j-2] + p[j-3];    
        }
        
        cout << p[n-1] << "\n";
    }
}