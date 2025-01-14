#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(int i=0; i < picture.size(); i++)
    {
        string temp;
        for(auto c : picture[i])
        {
            temp += string(k, c);
        }
        for(int h=0; h < k; h++)
            answer.emplace_back(temp);
    }
    return answer;
}