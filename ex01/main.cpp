#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    try
    {
        std::cout << YELLOW << "TEST Span(100)" << RESET << std::endl;
        const int size = 10000; 
        Span sp = Span(10000);
        for (int i = 0; i < size; ++i) {
            sp.addNumber(std::rand() % 10000); // filling with random numbers
        }
        //for (std::vector<int>::const_iterator it = sp.getVec().begin(); it != sp.getVec().end(); ++it){std::cout << *it << std::endl;}
        std::cout << "Shortest span(10) : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span(10) : " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';}
    try
    {
        std::cout << YELLOW << "\nTEST Span(6) avec doublon" << RESET << std::endl;
        Span sp = Span(6);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span(6) : " << sp.shortestSpan() << std::endl; // 2
        std::cout << "Longest span(6) : " << sp.longestSpan() << std::endl; // 14
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';}
    
    try
    {
        std::cout << YELLOW << "\nTEST Span vide" << RESET << std::endl;
        Span sp = Span(0);
        std::cout << "TEST Span vide" << std::endl;
        sp.addNumber(6);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';}

    try
    {
        std::cout << YELLOW << "\nTEST Span(1)" << RESET << std::endl;
        Span sp = Span(1);
        sp.addNumber(2);
        std::cout << "TEST Span(1)" << std::endl;
        sp.addNumber(6);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';}
    return 0;
}