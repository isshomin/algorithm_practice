#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    while(n >= answer)
    {
        n /= answer;
        answer++;
    }
    
    return answer - 1;
}