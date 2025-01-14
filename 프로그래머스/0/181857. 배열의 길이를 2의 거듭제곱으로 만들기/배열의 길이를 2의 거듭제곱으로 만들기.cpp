#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = 1;
    while(temp < arr.size())
        temp *= 2;

    arr.resize(temp,0);
    answer = arr;
    return answer;
}