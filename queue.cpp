#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // FIFO queue
    // template <class T, class Container = deque<T> > class queue;
    queue<string> s;
    s.push("Md");
    s.push("Ashik");
    s.push("khan");
    cout << "Top Elements " << s.front() << endl;
    s.pop();
    cout << "Top Elements " << s.front() << endl;
}

/*
empty
size
back
swap
push_back
pop_back
*/