#include <iostream>
#include <array>
using namespace std;

// references doc:https://cplusplus.com/reference/array/array/

int main()
{
   int basicArray[3] = {1, 2, 3};

   // template < class T, size_t N > class array;
   array<int, 4> a = {1, 2, 3, 4};

   int size = a.size();

   for (int i = 0; i < size; i++)
   {
      cout << a[i] << endl;
   }
   
   cout << "Elements of second index-> " << a.at(2) << endl;

   cout << "Empty or not-> " << a.empty() << endl;

   cout << "First elements-> " << a.front() << endl;

   cout << "Last Elements-> " << a.back() << endl;
}
/* Member types
The following aliases are member types of array. They are widely used as parameter and return types by member functions:

member type	definition	notes
value_type	The first template parameter (T)
reference	value_type&
const_reference	const value_type&
pointer	value_type*
const_pointer	const value_type*
iterator	a random access iterator to value_type	convertible to const_iterator
const_iterator	a random access iterator to const value_type
reverse_iterator	reverse_iterator<iterator>
const_reverse_iterator	reverse_iterator<const_iterator>
size_type	size_t	unsigned integral type
difference_type	ptrdiff_t	signed integral type

Member functions
Iterators
begin	Return iterator to beginning (public member function)
end	Return iterator to end (public member function)
rbegin	Return reverse iterator to reverse beginning (public member function)
rend	Return reverse iterator to reverse end (public member function)
cbegin	Return const_iterator to beginning (public member function)
cend	Return const_iterator to end (public member function)
crbegin	Return const_reverse_iterator to reverse beginning (public member function)
crend	Return const_reverse_iterator to reverse end (public member function)

Capacity
size	Return size (public member function)
max_size	Return maximum size (public member function)
empty	Test whether array is empty (public member function)

Element access
operator[]	Access element (public member function)
at	Access element (public member function)
front	Access first element (public member function)
back	Access last element (public member function)
data	Get pointer to data (public member function)

Modifiers
fill	Fill array with value (public member function)
swap	Swap content (public member function)

Non-member function overloads
get (array)	Get element (tuple interface) (function template)
relational operators (array)	Relational operators for array (function template)

Non-member class specializations
tuple_element<array>	Tuple element type for array (class template specialization)
tuple_size<array>	Tuple size traits for array (class template specialization) */