#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t1=0, t2=0;
    cin >> t1;
    
    unordered_set<int> us;
    for(int i=0; i < t1; i++)
    {
        int n;
        cin >> n;
        us.insert(n);
    }
    
    cin >> t2;
    for(int i=0; i < t2; i++)
    {
        int n;
        cin >> n;
        
        if(us.count(n))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}