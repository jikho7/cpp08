#ifndef EASYFIND_h
#define EASYFIND_h

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <deque>

template<typename T>
typename T::iterator easyfind(T &container, const int n);

template<typename T>
void DisplayResult(const T &container, typename T::iterator it);

template<typename T>
void DisplayContainer(const T &element);

#endif