#ifndef __alpha_h
#define __alpha_h

unsigned int size;

void init()
{
    // size = 0;
}


void inc()
{
    int b = 0;
    
    assert(b == 0);
    
    // assert(size >= 1); //  not works
    assert(size == 0);
    size ++;
    assert(size == 1);
    // assert(size == 2);
}


bool foo()
{
    // __CPROVER_assume(this);
    
    return (size == 0);
}


#endif
