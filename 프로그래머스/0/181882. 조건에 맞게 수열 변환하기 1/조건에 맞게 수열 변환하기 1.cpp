#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i=0; i < arr.size(); i++)
    {
        if(arr[i] >= 50 && arr[i] % 2 == 0)
            answer.emplace_back(arr[i]/2);
        else if(arr[i] < 50 && arr[i] % 2 == 1)
            answer.emplace_back(arr[i]*2);
        else
            answer.emplace_back(arr[i]);
    }
    return answer;
}