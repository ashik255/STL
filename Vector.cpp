 // Vectors are sequence containers representing arrays that can change in size

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // template < class T, class Alloc = allocator<T> > class vector; // generic template
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);

    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;

    cout << "Elements at 2nd Index " << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
}
