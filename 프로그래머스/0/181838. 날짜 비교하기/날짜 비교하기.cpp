#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    return date1[0] < date2[0] ? 1 :
            date1[0] > date2[0] ? 0 :
            date1[1] < date2[1] ? 1 :
            date1[1] > date2[1] ? 0 :
            date1[2] < date2[2] ? 1 : 0;
}