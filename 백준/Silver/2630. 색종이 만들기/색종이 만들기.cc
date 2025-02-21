#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<vector<int>> vec(n, vector<int>(n));
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    
    int w=0, b=0;
    
    auto lambda = [&](auto&& recur, int x, int y, int quad) -> void {
        int color = vec[x][y];
        bool isSame = true;
        
        for(int i=x; i < x+quad; i++)
        {
            for(int j=y; j < y+quad; j++)
            {
                if(vec[i][j] != color)
                {
                    isSame = false;
                    break;
                }
            }
            
            if(!isSame)
                break;
        }
        
        if(isSame)
        {
            (color == 0) ? w++ : b++;
            return;
        }
        
        int new_quad = quad / 2;
        recur(recur, x, y, new_quad);
        recur(recur, x, y + new_quad, new_quad);
        recur(recur, x + new_quad, y , new_quad);
        recur(recur, x + new_quad, y + new_quad, new_quad);
        
    };
    
    lambda(lambda, 0, 0, n);
    
    cout << w << '\n' << b;
}