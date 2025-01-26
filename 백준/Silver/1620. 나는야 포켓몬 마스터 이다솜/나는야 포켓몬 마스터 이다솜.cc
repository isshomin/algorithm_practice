#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int n=0, m=0;
    cin >> n >> m;
    
    string s = "";
    map<string, int> answer;
    string name[100001];
    
    for(int i=1; i <= n; i++)
    {
        cin >> s;
        answer.insert({s, i});
        name[i] = s;
    }
    
    for(int i=1; i <=m; i++)
    {
        cin >> s;
        if(isdigit(s[0]))
            cout << name[stoi(s)] << "\n";
        else
            cout << answer.find(s)->second << "\n";
    }
}