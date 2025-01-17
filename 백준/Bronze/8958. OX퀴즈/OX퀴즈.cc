#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    vector<string> arr(t);
    
    for(int i=0; i < t; i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0; i < t; i++)
    {
        int answer = 0;
        int temp = 0;
        
        for(int j=0; j < arr[i].size(); j++)
        {
            if(arr[i][j] == 'O')
            {
                temp++;
                answer += temp;
            }
            else
                temp = 0;
        }
        
     cout << answer << endl;
        
    }
}