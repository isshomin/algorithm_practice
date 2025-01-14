#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), [](char c) -> char {
        if(c == 'a')
            return 'A';
        else if(c == 'A')
            return 'A';
        else if(isupper(c))
            return tolower(c);
        return c;
    });
    return myString;
}