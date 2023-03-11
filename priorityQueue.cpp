/*
Priority queue
Priority queues are a type of container adaptors,
specifically designed such that its first element
is always the greatest of the elements it contains,
according to some strict weak ordering criterion.
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
   // template <class T, class Container = vector<T>,  class Compare = less<typename Container::value_type> > class priority_queue;
   // max heap
   priority_queue<int> maxV;
   // min- heap
   priority_queue<int, vector<int>, greater<int>> minV;

   maxV.push(1);
   maxV.push(3);
   maxV.push(5);
   maxV.push(11);
   maxV.push(15);
   cout << "size of arr " << maxV.size() << endl;
   int n = maxV.size();
   for (int i = 0; i < n; i++)
   {
      cout << maxV.top() << " ";
      maxV.pop();
   }
   cout << endl;
   minV.push(1);
   minV.push(35);
   minV.push(54);
   minV.push(110);
   minV.push(152);

   int m = minV.size();

   for (int i = 0; i < m; i++)
   {
      cout << minV.top() << ' ';
      minV.pop();
   }
   cout << endl;
}