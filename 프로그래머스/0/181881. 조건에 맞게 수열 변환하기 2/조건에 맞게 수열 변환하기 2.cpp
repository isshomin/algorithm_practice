#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    auto temp = arr;
    
    while (true) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else if (arr[i] < 50 && arr[i] % 2 == 1) {
                arr[i] = arr[i] * 2 + 1;
            }
        }

        if (temp == arr) {
            break;
        }

        temp = arr;
        answer++;
    }

    return answer;
}
