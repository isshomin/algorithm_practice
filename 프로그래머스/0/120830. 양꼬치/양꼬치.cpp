#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int service = 0;
    if(n >= 10)
    {
        service = n / 10;   
    }
    return (k - service) * 2000 + (n * 12000);
}