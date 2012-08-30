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

void invariants(unsigned int position)
{
    __CPROVER_assume(position < num_elements);
    assert(position < num_elements);
}

void insert(unsigned int element, unsigned int position)
{
    invariants(position);
    
    __elements[position] = element;
    
    assert(contains(element));
}



int main()
{
    return 0;
}
