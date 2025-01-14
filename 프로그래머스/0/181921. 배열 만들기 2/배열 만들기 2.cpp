#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i=l; i <= r; i++)
    {
        string temp = to_string(i);
        if(i % 5 == 0)
        {
            int check = 0;
            for(int j=0; j < temp.size(); j++)
            {
                if(temp[j] == '0' || temp[j] == '5')
                    check = 1;
                else
                {
                    check = 0;
                    break;
                }
            }
            if(check)
                answer.push_back(i);
        }

    }
    if(answer.empty())
        answer.push_back(-1);
    return answer;
}