#ifndef __alpha_h
#define __alpha_h

unsigned int size;

void init()
{
    // size = 0;
}


void inc()
{
    int size_at_pre = size;
    
    size = size + 1;
    
    assert(size == size_at_pre + 1);
}


bool foo()
{
    // __CPROVER_assume(this);
    
    return (size == 0);
}


#endif
