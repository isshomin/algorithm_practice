#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    vector<int> vec(t);
    for(int i=0; i < t; i++)
    {
        cin >> vec[i];
    }
    
    int min = *min_element(vec.begin(), vec.end());
    int max = *max_element(vec.begin(), vec.end());
    
    cout << min * max;
    
}