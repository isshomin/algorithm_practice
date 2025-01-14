#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(auto v : num_list)
    {
        while(v > 1)
        {
            if(v % 2 == 0)
            {
                v /= 2;
                answer++;
            }
            else
            {
                v = (v-1) / 2;
                answer++;
            }

        }
    }
    return answer;
}