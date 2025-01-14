#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    size_t pos = n_str.find_first_not_of('0');
    return pos == string::npos ? "0" : n_str.substr(pos);
}