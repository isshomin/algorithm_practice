#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    if(n == 1)
    {
        answer.assign(num_list.begin(), num_list.begin() + slicer[1] + 1);
    }
    else if(n == 2)
    {
        answer.assign(num_list.begin() + slicer[0], num_list.end());
    }
    else if(n == 3)
    {
        answer.assign(num_list.begin() + slicer[0], num_list.begin() + slicer[1] + 1);
    }
    else if(n == 4)
    {
        for(int i=slicer[0]; i<=slicer[1]; i+= slicer[2])
        {
            answer.emplace_back(num_list[i]);
        }
    }
    
    return answer;
}