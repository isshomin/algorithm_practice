#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    vector<string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    size_t iter = 0;
    string s = "";
    cin >> s;
    
    for(int i=0; i < vec.size(); i++)
    {
        while(true)
        {
            iter = s.find(vec[i]);
            if(iter == string::npos)
                break;
            
            s.replace(iter, vec[i].size(), "#");
        }
    }
    
    cout << s.size();
}