#include <iostream>
#include <vector>

using namespace std;

int n = 0;
vector<string> rgb;
bool arr[100][100] = {};

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void func(int x, int y, char c, bool isTrue)
{
    arr[x][y] = true;
    for(int i=0; i < 4; i++)
    {
        int X = x + dx[i];
        int Y = y + dy[i];
        
        if(X >= 0 && X < n && Y >= 0 && Y < n && !arr[X][Y])
        {
            if(isTrue)
            {
                if((c == 'R' || c == 'G') && (rgb[X][Y] == 'R' || rgb[X][Y] == 'G'))
                    func(X, Y, c, isTrue);
                else if(c == 'B' && rgb[X][Y] == 'B')
                    func(X, Y, c, isTrue);
            }
            else
            {
                if(rgb[X][Y] == c)
                func(X, Y, c, isTrue);
            }
        }
    }
}

int count(bool isTrue)
{
    int cnt = 0;
    fill(&arr[0][0], &arr[99][100], false);
    
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(!arr[i][j])
            {
                func(i, j, rgb[i][j], isTrue);
                cnt++;
            }
        }
    }
    
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    cin >> n;
    
    rgb.resize(n);
    for(int i=0; i < n; i++)
    {
        cin >> rgb[i];
    }
    
    int a=count(false), b=count(true);
    
    cout << a << " " << b << "\n";
}