#define PROBLEM_ONE 0

class Log_Addr
{
public:
    
#if PROBLEM_ONE    
    template <typename T>
    operator T *() const 
    { 
        return reinterpret_cast<T *>(_addr); 
    }
    
    // Quick and dirt solution:
    /* 
     operator int *() const 
     { 
         return reinterpret_cast<int *>(_addr); 
     }
    */ 
#endif

    template <typename T>
    T* foo() const 
    { 
        return reinterpret_cast<T *>(_addr); 
    }


private:
    unsigned int _addr;
};


int main()
{ 
    Log_Addr sp;
    
#if PROBLEM_ONE    
    static_cast<int *>(sp); // Question: how to specify that T is an int?
#endif

    // sp.foo(); // does not work even for g++
    sp.foo<int>();
    
    *sp.foo<int>() = 3;
    
    return 0;
}


