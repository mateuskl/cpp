#include <alpha.hh>

#define num_elements 5

unsigned int __elements[num_elements];

void init()
{
    for (int i = 0; i < num_elements; i++)
    {
        __elements[i] = 0;
    }
}


bool contains(unsigned int element)
{
    for (int i = 0; i < num_elements; i++)
    {
        if (__elements[i] == element)
        {
            return true;
        }
    }
    
    return false;
}


void insert(unsigned int element, unsigned int position)
{
    __elements[position] = element;
    
    assert(contains(element));
}



int main()
{
    return 0;
}
