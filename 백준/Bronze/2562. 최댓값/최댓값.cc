#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> answer(9);
    
    for (int i = 0; i < 9; i++) 
    {
        cin >> answer[i];
    }
    
    auto max_it = max_element(answer.begin(), answer.end());
    int max_value = *max_it;
    int idx = distance(answer.begin(), max_it) + 1;

    cout << max_value << "\n" << idx << endl;

    return 0;
}
