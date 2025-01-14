#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    if(is_suffix.size() > my_string.size())
        return 0;
    
    string temp = my_string.substr(my_string.size() - is_suffix.size());
    return temp == is_suffix ? answer=1:answer=0;
}