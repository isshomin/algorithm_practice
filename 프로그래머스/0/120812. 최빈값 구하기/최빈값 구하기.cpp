#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int max = 0;
    
    unordered_map<int,int> maps;
    
    for(auto n : array)
    {
        maps[n]++;
    }
    
    for(auto n : maps)
    {
        if(n.second > max)
        {
            max = n.second;
            answer = n.first;
        }
        else if(n.second == max)
            answer = -1;
    }
    return answer;
}