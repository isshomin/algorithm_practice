#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if(direction == "right")
        rotate(numbers.begin(), numbers.end()-1, numbers.end()); 
    else if(direction == "left")
        rotate(numbers.begin(), numbers.begin()+1, numbers.end());
    answer = numbers;
    return answer;
}