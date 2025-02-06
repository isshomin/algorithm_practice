#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    for(int i=0; i < 3; i++)
    {
        int n;
        cin >> n;
        
        long long total=0, answer=0;
        for(int j=0; j < n; j++)
        {
            long long temp;
            cin >> temp;
            
            long long a = total;
            total += temp;
            
            if(temp > 0 && a > 0 && total < 0)
                answer++;
            
            if(temp < 0 && a < 0 && total > 0)
                answer--;
        }
        
        if(answer == 0)
        {
            if(total == 0)
                cout << 0 << "\n";
            else if(total > 0)
                cout << '+' << "\n";
            else
                cout << '-' << "\n";
        }
        else if(answer > 0)
            cout << '+' << "\n";
        else
            cout << '-' << "\n";
    }
}