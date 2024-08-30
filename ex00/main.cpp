#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>
#include <iostream>
#include <cstdlib>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::vector<int>::iterator res;
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

        std::map<int, int>::iterator resMap;

        std::map<int, int> testMap;
        testMap.insert(std::pair<int, int>(1, 1));
        testMap.insert(std::pair<int, int>(2, 2));
        testMap.insert(std::pair<int, int>(42, -42));


        std::cout << "Want to find : " << atoi(av[1]) << std::endl;
        std::cout << std::endl;

        std::cout << "Vector test : " << std::endl;

        for (std::vector<int>::iterator it = testVector.begin(); it != testVector.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        res = easyfind(testVector, atoi(av[1]));

        if (res != testVector.end()) {
            std::cout << "res : " << *resList << std::endl;
        } else {
            std::cout << "Value not found in vector" << std::endl;
        }

        std::cout << std::endl;
        std::cout << "List test : " << std::endl;

        for (std::list<int>::iterator it = testList.begin(); it != testList.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        resList = easyfind(testList, atoi(av[1]));
        if (resList != testList.end()) {
            std::cout << "resList : " << *resList << std::endl;
        } else {
            std::cout << "Value not found in list" << std::endl;
        }
        std::cout << std::endl;

        std::cout << "Map test : " << std::endl;
        for(std::map<int, int>::iterator it = testMap.begin() ; it != testMap.end() ; it++)
        {
            std::cout << "key : " << it->first << " value : " << it->second << std::endl;
        }

        resMap = easyfind(testMap, atoi(av[1]));
        if (resMap != testMap.end())
            std::cout << "testMap : " << resMap->first << " value : " << resMap->second << std::endl;
        else
            std::cout << "Value not found in map" << std::endl;

        

    }

    return (0);
}