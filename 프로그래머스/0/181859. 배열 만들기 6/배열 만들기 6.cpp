#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk = {};
    vector<int> temp = {-1};
    for(int i=0; i < arr.size(); i++)
    {
        if(stk.empty())
        {
            stk.emplace_back(arr[i]);
        }
        else if(!stk.empty())
        {
            if(arr[i] == *(stk.end()-1))
            {
                stk.pop_back();
            }
            else
            {
                stk.emplace_back(arr[i]);
            }
        }
    }
    return !stk.empty() ? stk : temp;
}