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
    if(a.y == b.y)
        return a.x < b.x;
    return a.y < b.y;
}

int main()
{
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