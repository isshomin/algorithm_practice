#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int date = 0, count = 0;
    vector<int> car_num;
    cin >> date;
    
    for(int i=0; i < 5; i++)
    {
        int val;
        cin >> val;
        car_num.emplace_back(val);
    }

    for(const auto& i : car_num)
    {
        if(i == date)
            count++;
    }
    
    cout << count << endl;
    
    return 0;
}