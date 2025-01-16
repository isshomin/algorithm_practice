#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    int p_cnt = 0, y_cnt = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(const auto& c : s)
    {
        if(c == 'p')
            p_cnt++;
        else if(c == 'y')
            y_cnt++;
    }

    return p_cnt == y_cnt;
}