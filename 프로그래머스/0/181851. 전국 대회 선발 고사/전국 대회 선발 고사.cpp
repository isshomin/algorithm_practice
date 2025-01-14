#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<int> check;
    
    for(int i=0; i < attendance.size(); i++)
    {
        if(attendance[i])
            check.push_back(rank[i]);
    }
    
    sort(check.begin(), check.end());
    
    int a = find(rank.begin(), rank.end(), check[0]) - rank.begin();
    int b = find(rank.begin(), rank.end(), check[1]) - rank.begin();
    int c = find(rank.begin(), rank.end(), check[2]) - rank.begin();
    return (10000 * a) + (100 * b) + c;
}