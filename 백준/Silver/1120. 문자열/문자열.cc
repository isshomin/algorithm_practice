#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    string a, b;
    cin >> a >> b;
    
    int m_cnt = a.size();
    for(int i=0; i <= b.size() - a.size(); i++)
    {
        int cnt = 0;
        for(int j=0; j < a.size(); j++)
        {
            if(a[j] != b[i + j])
                cnt++;
        }
        
        m_cnt = min(m_cnt, cnt);
    }
    
    cout << m_cnt;
}