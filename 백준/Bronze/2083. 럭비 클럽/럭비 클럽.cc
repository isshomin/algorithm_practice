#include <iostream>

using namespace std;

struct Hito
{  
    string name;
    int age;
    int weight;
};
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    while(1)
    {
        Hito hito;
        cin >> hito.name >> hito.age >> hito.weight;
        
        if(hito.name == "#" && hito.age == 0 && hito.weight == 0)
            break;
        
        if(hito.age > 17 || hito.weight >= 80)
            cout << hito.name << " Senior\n";
        else
            cout << hito.name << " Junior\n";
    }

}