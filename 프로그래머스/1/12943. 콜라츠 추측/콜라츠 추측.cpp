#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    int cnt = 0;
    
    while(n != 1)
    {
        if(cnt > 499)
            return -1;
        
        if((n & 1) == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        
        cnt++;
    }
    
    return cnt;
}