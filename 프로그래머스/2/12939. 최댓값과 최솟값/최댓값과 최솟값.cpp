#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    string num;
    ss >> num;
    
    int a = stoi(num);
    int b = stoi(num);
    
    while(ss >> num)
    {
        int i = stoi(num);
        a = min(a, i);
        b = max(b, i);
    }
    
    return to_string(a) + " " + to_string(b);
}