#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int num = 1, top = 0, btm = n - 1, left = 0, right = n - 1;
    
    while(num <= n * n)
    {
        for(int i=left; i <= right; i++)
            answer[top][i] = num++;
        top++;
        
        for(int i=top; i <= btm; i++)
            answer[i][right] = num++;
        right--;
        
        for(int i=right; i >= left; i--)
            answer[btm][i] = num++;
        btm--;
        
        for(int i=btm; i >= top; i--)
            answer[i][left] = num++;
        left++;
    }
    return answer;
}