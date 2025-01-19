#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int cards[n];
    
    for(int i=0; i < n; i++)
        cin >> cards[i];
    
    int total = 0, max = 0;
    
    for(int i=0; i < n; i++)
    {
        for(int j=i+1; j < n; j++)
        {
            for(int k=j+1; k < n; k++)
            {
                total = cards[i] + cards[j] + cards[k];
                
                if(total <= m && max < total)
                    max = total;
            }
        }
    }
    
    cout << max;
}