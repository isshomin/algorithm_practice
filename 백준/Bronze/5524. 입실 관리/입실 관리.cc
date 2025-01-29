#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    vector<string> answer(n);
    for(int i=0; i < n; i++)
    {
        cin >> answer[i];
        transform(answer[i].begin(), answer[i].end(), answer[i].begin(), ::tolower);
    }
    
    for(const auto& s : answer)
    {
        cout << s << "\n";
    }
    
}