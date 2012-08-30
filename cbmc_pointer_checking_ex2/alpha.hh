#ifndef __alpha_h
#define __alpha_h


class Alpha
{

public:
    Alpha()
    {
        size = 0;
    }


    void inc()
    {
        assert(size >= 0);
        size ++;
        assert(size >= 1);
    }

    bool foo()
    {
        // __CPROVER_assume(this);
        
        return (size == 0);
    }
    
private:
    unsigned int size;
    
};


#endif
