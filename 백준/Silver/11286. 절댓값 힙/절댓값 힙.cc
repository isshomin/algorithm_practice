#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct compare
{
    bool operator()(const int &a, const int &b) const 
    {
        if (abs(a) == abs(b))
            return a > b;
        
        return abs(a) > abs(b);
    }
};

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, compare> pq;

    while(n--)
    {
        int x;
        cin >> x;
        
        if(x == 0)
        {
            if(pq.empty())
                cout << 0 << "\n";
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else
            pq.push(x);
    }

    
}
