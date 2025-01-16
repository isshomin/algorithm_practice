#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num = 1;
    string line;
    
    while(getline(cin, line))
    {
        stringstream ss(line);
        int n;
        ss >> n;
        
        if(n == 0)
            break;
        
        vector<int> arr(n);
        for(int i=0; i < n; i++)
            ss >> arr[i];
        
        cout << "Case " << num << ": Sorting... done!" << endl;
        
        num++;
    }
    
    return 0;
}