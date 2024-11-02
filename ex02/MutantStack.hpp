#ifndef MUTANT_HPP
#define MUTANT_HPP

#include <stack>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        typedef typename std::deque<T>::iterator iterator;  // == "typedef typename std::deque<T>"
        iterator            begin(); 
        iterator            end();

        typedef typename std::deque<T>::const_iterator const_iterator;  // == "typedef typename std::deque<T>"
        const_iterator      cbegin()const; // same name (begin) ok because param different (const)
        const_iterator      cend()const;

        typedef typename std::deque<T>::reverse_iterator reverse_iterator;  // == "typedef typename std::deque<T>"
        reverse_iterator    rbegin();
        reverse_iterator    rend();
};
#include "MutantStack.tpp"

#endif

/* NOTE :
    - member functions: constructor, empty, size, top, push, emplace, pop, swap. 
    - Conteneur sous jacent par defaut : deque.
    - this->c : convention pour les containeurs sous-jacents (containeur encapsule). 
    - dans .tpp, mettre typename car type dependant (<T>)

    - MAIN PART:
    - std::list : push_front ajoute element au debut de la liste
    - mutanstack : push ajoute element au sommet de la pile == fin de deque sous jacente
    - list : cbegin et crend c11, utilise begin et end
    */