#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    vector<int> arr;
    string temp = to_string(x);
    
    for(auto c : temp)
    {
        arr.emplace_back(c - '0');
    }
    
    int total = 0;
    for(const auto& i : arr)
    {
        total += i;
    }
    
    return x % total == 0 ? true : false;
}