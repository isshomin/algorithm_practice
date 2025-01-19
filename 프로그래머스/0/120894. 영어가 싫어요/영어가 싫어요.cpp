#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    map<string, int> m = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };
    
    string temp = "";
    for(const auto& c : numbers)
    {
        temp += c;
        
        if(m.find(temp) != m.end())
        {
            answer = answer * 10 + m[temp];
            temp = "";
        }
    }
        
    return answer;
}