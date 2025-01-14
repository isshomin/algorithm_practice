#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    // string answer = "";
    // for(int i=0; i < myString.length(); i++)
    // {
    //     if('A' <= myString[i] && 'Z' >= myString[i])
    //     {
    //         myString[i] += 32;
    //         answer += myString[i];
    //     }
    //     else
    //         answer += myString[i];
    // }
    // return answer;
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    return myString;
}