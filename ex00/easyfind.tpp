#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;

        it = std::find(container.begin(), container.end(), n);
        if (it != container.end())
            return (it);
        else
            return (container.end());

}

template<typename key, typename value>
typename std::map<key, value>::iterator easyfind(std::map<key, value> &container, int n) {
    return std::find_if(container.begin(), container.end(), [n](const std::pair<const key, value> & pair) {
        return pair.first == n;
    });
}

