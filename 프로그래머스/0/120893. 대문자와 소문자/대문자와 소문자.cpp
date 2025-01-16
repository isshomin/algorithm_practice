#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    transform(my_string.begin(), my_string.end(), my_string.begin(), [](char c){
        if(isupper(c))
            return tolower(c);
        else
            return toupper(c);
    });
    return my_string;
}