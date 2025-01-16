#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> temp;
    for(int i=1; i < n; i++)
    {
        if(n % i == 1)
            temp.emplace_back(i);
    }
    
    answer = *min_element(temp.begin(), temp.end());
    
    return answer;
}