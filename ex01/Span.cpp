#include "Span.hpp"


Span::Span(unsigned int N) : _vec(N), _smallestDistance(0)
{
    if (this->_vec.size() == 1 || this->_vec.size() == 0)
    {
        throw Span::noDistance();
    }
    _it = _vec.begin();
    // for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it){std::cout << *it << std::endl;}
}

Span::~Span(){}

Span::Span(const Span &other)
{
    if(this != &other)
    {
        this->_vec = other._vec;
        this->_smallestDistance = other._smallestDistance;
    }
}

Span &Span::operator=(const Span &other)
{
    if(this != &other)
    {
        this->_vec = other._vec;
        this->_smallestDistance = other._smallestDistance;
    }
    return (*this);
}

void Span::addNumber(unsigned int toAdd)
{
    if (_it != _vec.end()) {
        *_it = toAdd;
        ++_it;
    } else {
        throw Span::vecFull();
    }
}

void Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    try
    {
        for(std::vector<int>::iterator it = begin; it != end; ++it)
        {
            *this->_it = *it;
            ++this->_it;
        }
    } catch(const std::exception& e){
        throw Span::vecFull();}
}

int Span::shortestSpan()
{
    this->_smallestDistance = std::numeric_limits<int>::max(); // initwith biggest number
    std::vector<int> tmp = this->_vec;
    std::vector<int> uniqueVec;

    std::sort(tmp.begin(), tmp.end());
    std::unique_copy(tmp.begin(), tmp.end(), std::back_inserter(uniqueVec)); // vire les doubles et stocker res dans uniqueVec, back_inserter insert el to the end and manage vec size automatically
    ///for (std::vector<int>::iterator it = uniqueVec.begin(); it != uniqueVec.end(); ++it){std::cout << *it << " ";}
    for(size_t i = 1; i < uniqueVec.size(); i++)
    {
        int distance = uniqueVec[i] - uniqueVec[i - 1];
        if (distance < this->_smallestDistance)
            this->_smallestDistance = distance;
    }
    return this->_smallestDistance;
}

const std::vector<int>& Span::getVec() const
{
    return this->_vec;
}

int Span::longestSpan()
{
    std::vector<int>::iterator min = min_element(this->_vec.begin(), this->_vec.end());
    std::vector<int>::iterator max = max_element(this->_vec.begin(), this->_vec.end());

    return(*max - *min);
}

std::ostream &operator<<(std::ostream &os, const Span &other)
{
    (void) other;
    os << std::endl;
    return os;
}