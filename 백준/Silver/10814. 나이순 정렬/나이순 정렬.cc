#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct User 
{
    int age;
    int order;
    string name;
};

bool compare(const User& a, const User& b)
{
    if(a.age == b.age)
        return a.order < b.order;
    return a.age < b.age;
}

int main()
{
    int t;
    cin >> t;
    
    vector<User> user(t);
    for(int i=0; i < t; i++)
    {
        cin >> user[i].age >> user[i].name;
        user[i].order = i;
    }
    
    stable_sort(user.begin(), user.end(), compare);
    
    for(const auto& v : user)
    {
        cout << v.age << " " << v.name << "\n";
    }
}