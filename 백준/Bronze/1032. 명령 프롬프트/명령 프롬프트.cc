#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<string> vec(n);
    
    for(int i=0; i < n; i++)
    {
        cin >> vec[i];
    }
    
    string temp = vec[0];
    for(int i=1; i < n; i++)
    {
        for(int j=0; j < temp.size(); j++)
        {
            if(temp[j] != vec[i][j])
                temp[j] = '?';
        }
    }
    
    cout << temp << "\n";
}