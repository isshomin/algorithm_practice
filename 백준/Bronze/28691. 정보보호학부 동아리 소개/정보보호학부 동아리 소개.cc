#include <iostream>

using namespace std;

void func(char c)
{
    switch(c)
    {
        case 'M':
            cout << "MatKor";
            break;
        case 'W':
            cout << "WiCys";
            break;
        case 'C':
            cout << "CyKor";
            break;
        case 'A':
            cout << "AlKor";
            break;
        case '$':
            cout << "$clear";
            break;
    }
}

int main()
{
    char c;
    cin >> c;
    func(c);
}