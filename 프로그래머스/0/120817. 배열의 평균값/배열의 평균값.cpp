#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int total = 0;
    for(int i=0; i < numbers.size(); i++)
    {
        total += numbers[i];
    }
    answer = static_cast<double>(total) / numbers.size();
    return answer;
}