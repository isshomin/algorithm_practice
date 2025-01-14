#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int p = 0;
    int m = 1;
    
    for(int num : num_list)
    {
        p += num;
        m *= num;
    }
    
    p = pow(p,2);
    
    if(m < p)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}