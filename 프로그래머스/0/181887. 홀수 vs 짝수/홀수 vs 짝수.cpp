#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd = 0, even = 0;
    for(int i=0; i < num_list.size(); i++)
    {
        if((i+1) % 2 == 1)
            odd += num_list[i];
        else if((i+1) % 2 == 0)
            even += num_list[i];
    }
    return odd > even ? odd : even;
}