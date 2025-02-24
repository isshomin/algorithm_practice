#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            answer.emplace_back(i);
            
            while(n % i == 0)
                n /= i;
        }
    }
    
    if(n > 1)
        answer.emplace_back(n);
    
    return answer;
}