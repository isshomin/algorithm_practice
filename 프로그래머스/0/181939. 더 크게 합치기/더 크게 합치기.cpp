#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    // int answer = 0;
    // string ab = to_string(a) + to_string(b);
    // string ba = to_string(b) + to_string(a);
    // if(stoi(ab) >= stoi(ba))
    // {
    //     answer = stoi(ab);
    // }
    // else
    // {
    //     answer = stoi(ba);
    // }
    // return answer;
    return max(stoi(to_string(a)+to_string(b)), stoi(to_string(b)+to_string(a)));
}