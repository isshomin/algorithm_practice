#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    return (num & 1) != 1 ? "Even" : "Odd";
}