#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<string> answer(n);
    for(int i=0; i < n; i++)
    {
        cin >> answer[i];
    }
    
    for(int i=0; i < n; i++)
    {
        if(answer[i].size() >= 6 && answer[i].size() <= 9)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    
}