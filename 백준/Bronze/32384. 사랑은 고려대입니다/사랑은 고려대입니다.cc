#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    stringstream ss;
    string word = "LoveisKoreaUniversity";
    
    for(int i=0; i < num; i++)
    {
        if(i > 0)
            ss << " ";
        
        ss << word;
    }
    
    cout << ss.str();
    
    return 0;
}