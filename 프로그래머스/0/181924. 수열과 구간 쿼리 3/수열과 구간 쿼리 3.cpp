#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(auto vec : queries)
    {
        swap(arr[vec[0]], arr[vec[1]]);
    }
    
    
    return arr;
}