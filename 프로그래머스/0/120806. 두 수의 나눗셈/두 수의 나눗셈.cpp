#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float temp = static_cast<float>(num1) / num2;
    answer = static_cast<int>(temp * 1000);
    return answer;
}