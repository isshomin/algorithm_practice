#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> answer(8);
    
    for(int i=0; i < 8; i++)
        cin >> answer[i];
    
    if(is_sorted(answer.begin(), answer.end()))
        cout << "ascending";
    
    else if(is_sorted(answer.begin(), answer.end(), greater<int>()))
        cout << "descending";
    else
        cout << "mixed";
}