#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i=0; i < queries.size(); i++)
    {
        int temp = 0;
        int min = 1000001;
        for(int j=queries[i][0]; j <= queries[i][1]; j++)
        {
            if(queries[i][2] < arr[j] && arr[j] < min)
            {
                min = arr[j];
                temp = 1;
            }
        }
        if(temp == 1)
            answer.push_back(min);
        else
            answer.push_back(-1);
        
    }
    return answer;
}