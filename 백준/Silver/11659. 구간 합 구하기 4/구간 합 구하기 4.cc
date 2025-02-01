#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0;
    cin >> n >> m;
    
    vector<int> arr(n + 1, 0);
    vector<int> answer(n + 1, 0);
    
    for(int i=1; i <= n; i++)
    {
        cin >> arr[i];
        answer[i] = answer[i - 1] + arr[i];
    }
    
    while(m--)
    {
        int a=0, b=0;
        cin >> a >> b;
        
        cout << answer[b] - answer[a - 1] << "\n";
    }
}