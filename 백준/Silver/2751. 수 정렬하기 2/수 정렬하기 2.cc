#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
    
    int t;
    cin >> t;
    
    vector<int> arr(t);
    
    for(auto& v : arr)
        cin >> v;
    
    sort(arr.begin(), arr.end());
    
    for(const auto& v : arr)
        cout << v << "\n";
    
}