/*
Maps are associative containers that store elements
formed by a combination of a key value and a mapped value,
following a specific order.
Each element associates a key to a mapped value*/ 
#include <iostream>
#include <map>

using namespace std;
int main()
{ 
// typedef pair<const Key, T> value_type;
    map<int, string> m;

    m[1] = "MD";
    m[11] = "Ariful";
    m[13] = "Islam";
    m[10] = "Ashik";

    m.insert({5, "khan"});

    cout << "before Erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "finding -13 " << m.count(-13) << endl;
    cout << "finding 11 " << m.count(11) << endl;
    // cout<<"finding 13 "<<m.count(13)<<endl;

    m.erase(13);
    cout << "after Erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl
         << endl;
}
