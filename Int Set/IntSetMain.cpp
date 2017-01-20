#include "IntSet.hpp"
#include <iostream>
using namespace std;

int main()
{
	IntSet a;
	a.add(1);
	a.add(2);
	a.add(3);
	a.add(4);
	
	cout << a.size() << endl;
	cout << a.isEmpty << endl;
	cout << a.contains(1) << endl << endl << endl;

	a.remove(3);

	cout << a.size() << endl;

	return 0;
}
