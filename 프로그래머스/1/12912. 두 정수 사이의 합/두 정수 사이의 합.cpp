#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long s = min(a, b);
    long long l = max(a, b);
    
    return (l - s + 1) * (l + s) / 2;
}