#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    int arr[100001] = {0};
    
    for(int i=0; i < t; i++)
    {
        int n;
        cin >> n;
        arr[n] += 1;
    }

    for(int i=1; i < 100001; i++)
    {
        for(int j=0; j < arr[i]; j++)
            cout << i << "\n";
    }
    
}