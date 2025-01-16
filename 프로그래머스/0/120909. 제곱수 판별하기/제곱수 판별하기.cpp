#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int temp = sqrt(n);
    
    if(temp * temp == n)
        return 1;
    else
        return 2;
}