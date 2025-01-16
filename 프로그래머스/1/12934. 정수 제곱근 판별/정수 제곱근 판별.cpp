#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long temp = sqrt(n);
    
    return temp*temp == n ? pow(temp+1, 2) : -1;
}