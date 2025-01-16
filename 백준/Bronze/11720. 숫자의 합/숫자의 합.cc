#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string nums;
    cin >> nums;
    
    int sum = 0;
    
    for(const auto& c : nums)
        sum += c - '0';
    
    cout << sum;
}