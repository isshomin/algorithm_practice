#include <string>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

int solution(string s) {
    
    stringstream ss(s);
    string word;
    vector<int> answer;

    while(ss >> word)
    {
        if(word == "Z")
        {
            if(!answer.empty())
                answer.pop_back();
        }
        else
            answer.push_back(stoi(word));
    }
    
    return accumulate(answer.begin(), answer.end(), 0);
}