#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    string word;
    
    vector<string> temp;
    
    while(ss >> word)
    {
        temp.emplace_back(word);    
    }
    
    answer = stoi(temp[0]);
    
    for(int i=0; i < temp.size(); i++)
    {
        if(temp[i] == "+")
            answer += stoi(temp[i+1]);
        else if(temp[i] == "-")
            answer -= stoi(temp[i+1]);
            
    }
    return answer;
}