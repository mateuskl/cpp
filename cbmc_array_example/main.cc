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


void bubble_sort()
{
    bool swapped;
    unsigned int temp = 0;
    int i;
    int j;
    for (i = num_elements - 1; i; swapped = false, i--) 
    {
        for (j = 0; j < i; j++)
        {
            if (__elements[j] > __elements[j+1]) 
            {
                temp = __elements[j];
                __elements[j] = __elements[j+1];
                __elements[j+1] = temp;
                swapped = true;
             }
        }     
        if (!swapped) break;
    }
    
    
    unsigned int n;
    unsigned int c;
    for (i = 0, j = 1; (i < num_elements) && (j < num_elements - 1); i++, j++)
    {
        c = __elements[i];
        n = __elements[j];
        assert(c <= n);
    }
    
}



int main()
{
    return 0;
}
