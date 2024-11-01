#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <limits>

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"   

class Span
{
    std::vector<int> _vec;
    std::vector<int>::iterator _it;
    int _smallestDistance;

    public:
    Span(unsigned int N);
    ~Span();
    Span(const Span &other);
    Span &operator=(const Span &other);

    class noDistance : public std::exception{
        public :
        virtual const char* what() const throw()
        {
            return("No distance.\n");
        }
    };

    class vecFull : public std::exception{
        public :
        virtual const char* what() const throw()
        {
            return("Vector is full\n");
        }
    };

    // GETTERS
    const std::vector<int>& getVec() const;

    //METHODS
    void addNumber(unsigned int toAdd);       // ajoute un seul nombre a Span
    int shortestSpan();    // trouve + courte distance entre nb, return cette distance
    int longestSpan();
};

std::ostream &operator<<(std::ostream &os, const Span &other);


#endif