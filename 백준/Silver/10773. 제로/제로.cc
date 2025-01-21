#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int k = 0;
    cin >> k;
    
    stack<int> st;
    for(int i=0; i < k; i++)
    {
        int n = 0;
        cin >> n;
        if(n == 0)
            st.pop();
        else
            st.push(n);
    }
    
    long long answer = 0;
    while(!st.empty())
    {
        answer += st.top();
        st.pop();
    }
    
    cout << answer;
}