#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int calc1(const vector<int>& vec)
{
    double total = accumulate(vec.begin(), vec.end(), 0);
    return round(total / vec.size());
}

int calc2(vector<int>& vec)
{
    sort(vec.begin(), vec.end());
    return vec[vec.size() / 2];
}

int calc3(const vector<int>& vec)
{
    vector<int> temp(8001, 0);
    for(const auto& i : vec)
        temp[i + 4000]++;
    
    int max = *max_element(temp.begin(), temp.end());
    
    vector<int> answer;
    for(int i=0; i < temp.size(); i++)
    {
        if(temp[i] == max)
            answer.emplace_back(i - 4000);
    }
    
    if(answer.size() > 1)
        return answer[1];
    
    return answer[0];
}

int calc4(const vector<int>& vec)
{
    return *max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end());
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    
    vector<int> vec(t);
    for(auto& i : vec)
    {
        cin >> i;
    }
    
    cout << calc1(vec) << "\n";
    cout << calc2(vec) << "\n";
    cout << calc3(vec) << "\n";
    cout << calc4(vec) << "\n";
    
}