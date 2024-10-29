#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T &container, const int n)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return (it);
    else
        return (container.end());
}

template<typename T>
void DisplayContainer(const T &element)
{
        std::cout << element << " ";
}

template<typename T>
void DisplayResult(const T &container, typename T::iterator it)
{
    if (it != container.end()) {
        std::cout << "Result: " << *it << std::endl;
    } else {
        std::cout << "Value not found in list" << std::endl;
    }
}

// std::T<int>::iterator it "==" typename T::iterator it