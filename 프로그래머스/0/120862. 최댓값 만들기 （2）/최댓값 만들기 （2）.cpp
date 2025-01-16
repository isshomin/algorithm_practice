#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    
    int max1 = numbers[0] * numbers[1];
    int max2 = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    answer = max(max1, max2);
        
    return answer;
}