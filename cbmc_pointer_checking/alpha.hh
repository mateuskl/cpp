#ifndef __alpha_h
#define __alpha_h


class Alpha
{

public:
    

    bool foo()
    {
        __CPROVER_assume(this);
        
        return (size == 0);
    }
    
private:
    unsigned int size;
    
};


#endif
