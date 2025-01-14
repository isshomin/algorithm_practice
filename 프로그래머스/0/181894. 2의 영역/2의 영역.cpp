#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(find(arr.begin(), arr.end(), 2) == arr.end())
        return {-1};
    
    int begin = -1, end = -1;
    for(int i=0; i < arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            if(begin == -1)
                begin = i;
            end = i;
        }
    }
    
    answer.assign(arr.begin() + begin, arr.begin() + end + 1);
    return answer;
}