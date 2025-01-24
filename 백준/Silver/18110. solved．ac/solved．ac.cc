#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    if(t == 0)
    {
        cout << 0;
        return 0;
    }
    
    vector<int> vec(t);
    for(int i=0; i < t; i++)
    {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    
    int temp = round(t * 0.15);    
    
    vector<int>::iterator it = vec.begin() + temp;
    vector<int>::iterator eit = vec.end() - temp;
    
    double sum = accumulate(it, eit, 0);
    int answer = round(sum / distance(it, eit));
    
    cout << answer;
}