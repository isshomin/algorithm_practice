#include <iostream>
#include <set>

using namespace std;

int main()
{
    int arr[10];
    set<int> answer;
    
    for(int i=0; i < 10; i++)
    {
        cin >> arr[i];
        answer.insert(arr[i] % 42);
    }
    
    cout<< answer.size();
}