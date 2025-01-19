#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    if(a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}

int main()
{
    int t;
    cin >> t;
    
    unordered_set<string> us;
    vector<string> words;
    
    for(int i=0; i < t; i++)
    {
        string word;
        cin >> word;
        
        if(us.find(word) == us.end())
        {
            words.emplace_back(word);
            us.insert(word);
        }
    }
    
    sort(words.begin(), words.end(), compare);
    
    for(const auto& s : words)
        cout << s << "\n";
}