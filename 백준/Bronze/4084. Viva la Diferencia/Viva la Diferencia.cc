#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
    while (true)
    {
        vector<int> nums(4);
        for (auto& i : nums)
            cin >> i;

        if (nums[0] == 0 && nums[1] == 0 && nums[2] == 0 && nums[3] == 0)
            break;

        int cnt = 0;

        while (true) 
        {
            vector<int> temp(4);
            for (int i = 0; i < 4; i++) 
                temp[i] = abs(nums[i] - nums[(i + 1) % 4]);

            if (temp == nums || temp == vector<int>{0, 0, 0, 0}) 
                break;

            nums = temp;
            cnt++;
        }

        cout << cnt << endl;
    }
    
    return 0;
}
