#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int r;
        string s;
        cin >> r >> s;

        string p;
        for (char c : s)
            p.append(r, c);

        cout << p << endl;
    }

    return 0;
}
