#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> func(const vector<int> &a, const vector<int> &b)
{
    int n=a.size(), m=b.size();
    vector<int> result(n + m, 0);

    for(int i=0; i < n; i++) 
    {
        for(int j=0; j < m; j++)
        {
            result[i + j] += a[i] * b[j];
            result[i + j + 1] += result[i + j] / 10;
            result[i + j] %= 10;
        }
    }

    while(result.size() > 1 && result.back() == 0)
    {
        result.pop_back();
    }
    
    return result;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    string a, b;
    cin >> a >> b;
    
    vector<int> num1(n), num2(m);
    for(int i=0; i < n; i++) 
    {
        num1[n - i - 1] = a[i] - '0';
    }
    
    for(int i=0; i < m; i++)
    {
        num2[m - i - 1] = b[i] - '0';
    }
    vector<int> answer = func(num1, num2);

    for(int i=answer.size()-1; i >= 0; i--) 
    {
        cout << answer[i];
    }
    
    cout << "\n";

}
