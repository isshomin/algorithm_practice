#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string temp = to_string(n);
    
    for(const auto& c : temp)
    {
        answer += c - '0';
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}