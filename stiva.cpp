#include "stiva.h"
#include <iostream>
#include <assert.h>

using std::cout;

template <class T>
bool stiva<T>::empty()
{
	if (v.empty()){
		return true;
	}
	else{
		return false;
	}
}

template <class T>
void stiva<T>::push(const T &a)
{
	assert(sp != v.max_size());	
	v.push_back(a);
}

template <class T>
T& stiva<T>::top()
{
	assert(!empty());
	return v.back();
}

template <class T>
void stiva<T>::pop()
{
	if (!empty()){
		v.pop_back();
	}
}

template class stiva<int>;
template class stiva<double>;
template class stiva<float>;