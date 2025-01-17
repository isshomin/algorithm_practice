#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> cnt(10000001);
    
    for(const auto& i : tangerine)
    {
        cnt[i]++;
    }
    
    sort(cnt.begin(), cnt.end(), greater<int>());
    int i = 0;
    
    while(k > 0)
    {
        k -= cnt[i];
        i++;
        answer++;
    }
    return answer;
}