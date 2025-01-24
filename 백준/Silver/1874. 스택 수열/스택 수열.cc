#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n = 0;
    cin >> n;
    
    vector<int> vec(n);
    for(auto& i : vec)
        cin >> i;
    
    stack<int> st;
    vector<char> answer;
    int cnt = 1;
    
    for(const auto i : vec)
    {
        while(cnt <= i)
        {
            st.push(cnt);
            answer.emplace_back('+');
            cnt++;
        }
        
        if(!st.empty() && st.top() == i)
        {
            st.pop();
            answer.emplace_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    
    for(const auto& c : answer)
        cout << c << "\n";
}