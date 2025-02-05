#include <iostream>
#include <cmath>

using namespace std;

void func(int x1, int y1, int r1, int x2, int y2, int r2)
{
    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    if(dist == 0 && r1 == r2)
        cout << "-1\n";
    else if(dist == r1 + r2 || dist == abs(r1 - r2))
        cout << "1\n";
    else if(abs(r1 - r2) < dist && dist < r1 + r2)
        cout << "2\n";
    else
        cout << "0\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        func(x1, y1, r1, x2, y2, r2);
    }
}