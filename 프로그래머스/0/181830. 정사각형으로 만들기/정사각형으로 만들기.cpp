#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    if(arr.size() > arr[0].size())
    {
        for(int i=0; i < arr.size(); i++)
            arr[i].resize(arr.size(), 0);
    }
    else if(arr.size() < arr[0].size())
    {
        for(int i=arr.size(); i < arr[0].size(); i++)
            arr.push_back(vector<int>(arr[0].size(), 0));
    }
    return arr;
}