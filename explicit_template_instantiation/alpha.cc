#include <iostream>
#include <alpha.h>

template<typename T>
void Alpha<T>::foo()
{
    std::cout << "Hi" << std::endl;
}


// Explicit template instantiation
template class Alpha<int>;
