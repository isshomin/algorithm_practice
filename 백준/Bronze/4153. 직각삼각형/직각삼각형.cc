#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    
    while(1)
    {
        cin >> a >> b >> c;
        
        if(a == 0 && b == 0 && c == 0)
            break;
        
        int temp[3] = {a, b, c};
        sort(temp, temp + 3);
        
        if(temp[0] * temp[0] + temp[1] * temp[1] == temp[2] * temp[2])
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }
}