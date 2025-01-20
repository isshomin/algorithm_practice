#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct pos
{
    int x;
    int y;
};

bool compare(const pos& a, const pos& b)
{
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t=0, x=0, y=0;
    cin >> t;
    
    vector<pos> answer(t);
    for(int i=0; i < t; i++)
    {
        cin >> answer[i].x >> answer[i].y;
    }
    
    sort(answer.begin(), answer.end(), compare);
    
    for(const auto& i : answer)
        cout << i.x << " " << i.y << "\n";
}