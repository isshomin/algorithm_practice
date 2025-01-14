#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    // string answer = "";
    // for(int i=0; i < myString.size(); i++)
    // {
    //     if('a' <= myString[i] && 'z' >= myString[i])
    //     {
    //         myString[i] -= 32;
    //         answer += myString[i];
    //     }
    //     else
    //         answer += myString[i];
    // }
    // return answer;
    transform(myString.begin(),myString.end(),myString.begin(),::toupper);

    return myString;
}