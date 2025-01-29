#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n=0, cnt=0;
    cin >> n;
    
    vector<int> answer(n);
    for(int i=0; i < n; i++)
    {
        cin >> answer[i];
        
        if(answer[i] % 2 != 0)
            cnt++;
    }
    
    cout << cnt;
}