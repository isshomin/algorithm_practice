#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for(int i=0; i < n; i++)
    {
        cin >> vec[i];
    }
    
    int answer = 0;
    for(int i=0; i < n; i++)
    {
        while(i < n && vec[i] > vec[i + 1])
        {
            i++;
        }
        
         answer++;
    }
    
    cout << answer;
}