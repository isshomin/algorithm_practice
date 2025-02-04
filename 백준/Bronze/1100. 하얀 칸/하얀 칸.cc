#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int cnt = 0;
    char arr[8][9] = {};
    
    for(int i=0; i < 8; i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0; i < 8; i++)
    {
        for(int j=i%2; j < 8; j+=2)
        {
            if(arr[i][j] == 'F')
                cnt++;
        }
    }
    
    cout << cnt;
}