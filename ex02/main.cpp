#include "MutantStack.hpp"
#include <iostream>

int main()
{
    try
    {
        std::cout << "TEST VECTOR" << std::endl;
        std::vector<int> vstack;
        vstack.push_back(5);
        vstack.push_back(17);
        std::cout << "vstack.top : " << vstack.back() << std::endl;
        vstack.pop_back();
        std::cout << "vstack.size : " << vstack.size() << std::endl;
        vstack.push_back(3);
        vstack.push_back(5);
        vstack.push_back(737);
        //[...]
        vstack.push_back(0);
        std::vector<int>::iterator it = vstack.begin();
        std::vector<int>::iterator ite = vstack.end();
        std::cout 
        << "Iterator begin : " << *vstack.begin() << " Iterator end : " << *(--vstack.end())
        << "\nConst iterator begin : " << *vstack.begin() << " Const iterator end : " << *(--vstack.end())
        << "\nReverse iterator begin : " << *vstack.rbegin() << " Reverse iterator end : " << *(--vstack.rend()) << std::endl;
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::vector<int> s(vstack);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "TEST LIST" << std::endl;
        std::list<int> lstack;
        lstack.push_back(5);
        lstack.push_back(17);
        std::cout << "lstack.top : " << lstack.back() << std::endl;
        lstack.pop_back();
        std::cout << "lstack.size : " << lstack.size() << std::endl;
        lstack.push_back(3);
        lstack.push_back(5);
        lstack.push_back(737);
        //[...]
        lstack.push_back(0);
        std::list<int>::iterator it = lstack.begin();
        std::list<int>::iterator ite = lstack.end();
        std::cout 
        << "Iterator begin : " << *lstack.begin() << " Iterator end : " << *(--lstack.end())
        << "\nConst iterator begin : " << *lstack.begin() << " Const iterator end : " << *(--lstack.end())
        << "\nReverse iterator begin : " << *lstack.rbegin() << " Reverse iterator end : " << *(--lstack.rend()) << std::endl;
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(lstack);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout << "TEST MUTANTSTACK" << std::endl;
        MutantStack<int>
        mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "mstack.top : " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "mstack.size : " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        std::cout 
        << "Iterator begin : " << *mstack.begin() << " Iterator end : " << *(mstack.end() - 1)
        << "\nConst iterator begin : " << *mstack.cbegin() << " Const iterator end : " << *(mstack.cend() - 1)
        << "\nReverse iterator begin : " << *mstack.rbegin() << " Reverse iterator end : " << *(mstack.rend() - 1) << std::endl;
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}