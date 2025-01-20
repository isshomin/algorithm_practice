#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

char white[8][8], black[8][8];

void init()
{
    for(int i=0; i < 8; i++)
    {
        for(int j=0; j< 8; j++)
        {
            if((i + j) % 2 == 0)
            {
                white[i][j] = 'W';
                black[i][j] = 'B';
            }
            else
            {
                white[i][j] = 'B';
                black[i][j] = 'W';
            }
        }
    }
}

int calc(const vector<string>& board, int a, int b)
{
    int cnt1=0, cnt2=0;
    
    for(int i=0; i < 8; i++)
    {
        for(int j=0; j < 8; j++)
        {
            if(board[a + i][b + j] != white[i][j])
                cnt1++;
            else if(board[a + i][b + j] != black[i][j])
                cnt2++;
        }
    }
    
    return min(cnt1, cnt2);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0;
    cin >> n >> m;
    
    vector<string> board(n);
    for(int i=0; i < n; i++)
    {
        cin >> board[i];
    }
    
    init();
    
    int answer = numeric_limits<int>::max();
    
    for(int i=0; i <= n-8; i++)
    {
        for(int j=0; j <= m-8; j++)
        {
            int temp = calc(board, i, j);
            answer = min(answer, temp);
        }
    }
    
    cout << answer << "\n";
}