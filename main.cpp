#include <vector>
#include <iostream>
#include "stiva.h"

using std::vector;
using std::cout;

int main()
{
	stiva<int> s;

	cout << s;
	s.push(3);
	s.push(4);
	cout << s;
	cout << s.top() << "\n";
	s.pop();
	cout << s;
	s.pop();
	cout << s;
	return 0;
}