#ifndef MUTANT_TPP
#define MUTANT_TPP

#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack(): std::stack<T>(){};

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
    //std::cout << "template" << std::endl;
    return this->c.begin();
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
    //std::cout << "template" << std::endl;
    return this->c.end();
}

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::cbegin() const
{
    //std::cout << "template" << std::endl;
    return this->c.begin();
}

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::cend() const
{
    //std::cout << "template" << std::endl;
    return this->c.end();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin()
{
    //std::cout << "template" << std::endl;
    return this->c.rbegin();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend()
{
    //std::cout << "template" << std::endl;
    return this->c.rend();
}

#endif