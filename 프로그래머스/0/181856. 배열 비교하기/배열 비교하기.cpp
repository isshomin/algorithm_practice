#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int a = 0, b = 0;
    if(arr1.size() == arr2.size())
    {
        for(int i=0; i < arr1.size(); i++)
        {
            a += arr1[i];
            b += arr2[i];
        }
        if(a == b)
            return 0;
        else
            return a > b ? 1 : -1;
    }
    return arr1.size() > arr2.size() ? 1 : -1;
}