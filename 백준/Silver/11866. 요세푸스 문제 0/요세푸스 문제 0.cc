#include <iostream>
#include <vector>

using namespace std;

vector<int> func(int n, int k)
{
    vector<int> arr;
    vector<int> answer;
    
    for(int i=1; i<= n; i++)
        arr.emplace_back(i);
    
    int idx = 0;
    
    while(!arr.empty())
    {
        idx =(idx + k - 1) % arr.size();
        answer.emplace_back(arr[idx]);
        arr.erase(arr.begin() + idx);
    }
    
    return answer;
}

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<int> answer = func(N,K);
    
    cout << "<";
    for (auto i=0; i < answer.size(); i++) 
    {
        cout << answer[i];
        
        if (i != answer.size() - 1)
            cout << ", ";
    }
    cout << ">" << endl;
    return 0;
    
}