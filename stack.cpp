#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // template <class T, class Container = deque<T> > class stack;
    stack<string> s;
    s.push("Md");
    s.push("Ashik");
    s.push("khan");
    cout << "Top Elements " << s.top() << endl;
    s.pop();
    cout << "Top Elements " << s.top() << endl;
}

/*
empty
size
back
push_back
pop_back
*/