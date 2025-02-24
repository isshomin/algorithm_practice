#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a > b)
        swap(a, b);
    
    answer = 1LL * (b - a + 1) * (a + b) / 2;
    return answer;
}