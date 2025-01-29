#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 0;
    cin >> t;
    cin.ignore();
    
    for(int i=0; i < t; i++)
    {
        string s;
        getline(cin, s);
        
        vector<int> nums;
        stringstream ss(s);
        int n = 0;
        bool mack=false, zack=false;
        
        while(ss >> n)
        {
            nums.emplace_back(n);
            
            if(n == 18)
                mack = true;
            if(n == 17)
                zack = true;
        }
        
        for(int i=0; i < nums.size(); i++)
        {
            if(i > 0) 
                cout << " ";
            
            cout << nums[i];
        }
        
        cout << "\n";
        
        if(mack && zack)
            cout << "both";
        else if(mack)
            cout << "mack";
        else if(zack)
            cout << "zack";
        else
            cout << "none";
        
        cout << "\n";
        
        if(i < t - 1) 
            cout << "\n";
    }
    

}