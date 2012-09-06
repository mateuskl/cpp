#ifndef __alpha_h
#define __alpha_h


class Alpha
{

public:
    Alpha() {}

    bool foo()
    {
        // __CPROVER_assume(this);
        
        return (size == 0);
    }
    
    
    void doit()
    {
        assert(2 == 2);
    }
    
private:
    unsigned int size;
    
};


#endif
