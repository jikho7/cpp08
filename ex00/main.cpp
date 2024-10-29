#include "easyfind.hpp"
#include "easyfind.tpp"
#include <iostream>
#include <cstdlib>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::vector<int>::iterator resVector;
        std::vector<int> testVector;
        testVector.push_back(5);
        testVector.push_back(-5);
        testVector.push_back(55);
        testVector.push_back(59);
        testVector.push_back(558);

        std::list<int>::iterator resList;
        std::list<int> testList;
        testList.push_back(1);
        testList.push_back(78);
        testList.push_back(42);
        testList.push_back(-988);
        testList.push_back(0);

        std::deque<int>::iterator resDeque;
        std::deque<int> testDeque;
        testDeque.push_back(1);
        testDeque.push_back(78);
        testDeque.push_back(42);
        testDeque.push_back(-988);
        testDeque.push_front(0);

        std::cout << "Want to find : " << atoi(av[1]) << std::endl;
        std::cout << std::endl;

        std::cout << "---------- Vector test ----------" << std::endl;
        for_each(testVector.begin(), testVector.end(), DisplayContainer<int>);
        std::cout << std::endl;
        resVector = easyfind(testVector, atoi(av[1]));
        DisplayResult(testVector, resVector);
        std::cout << std::endl;

        std::cout << "---------- List test ----------" << std::endl;
        for_each(testList.begin(), testList.end(), DisplayContainer<int>);
        std::cout << std::endl;
        resList = easyfind(testList, atoi(av[1]));
        DisplayResult(testList, resList);
        std::cout << std::endl;

        std::cout << "---------- Deque test ----------" << std::endl;
        for_each(testDeque.begin(), testDeque.end(), DisplayContainer<int>);
        std::cout << std::endl;
        resDeque = easyfind(testDeque, atoi(av[1]));
        DisplayResult(testDeque, resDeque);
    }

    return (0);
}

/*
    NOTES:

    Deque:
        Application pour deque -> rotation (sur une liste d'éléments de données).
        Sens des aiguilles d'une montre : retirer élément de l'arrière et l'insérer à l'avant.

    List :
        Doublement chaine, next, previous
        Forward_list, C11 : Un sens, element pointe sur le suivant, necessite moins de memoire

    Function for_each(InputIterator first, InputIterator last, Function fn)
    {
        while (first!=last) {
            fn (*first);
            ++first;
        }
    return fn;
    }

    for_each attend une fonction/foncteur avec en argument element et non iterateur
*/