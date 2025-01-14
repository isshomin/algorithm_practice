#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int last = num_list.back();
    int forward_last = *(num_list.end() -2);
    
    if(last > forward_last)
    {
        int temp = last - forward_last;
        num_list.push_back(temp);
    }
    else
    {
        int temp = last * 2;
        num_list.push_back(temp);
    }
    
    answer = num_list;
    
    return answer;
}