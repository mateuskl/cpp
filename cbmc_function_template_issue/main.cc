class Log_Addr
{
public:
    

    // operator int *() const { return reinterpret_cast<int *>(_addr); }

template <typename T>
static T func(void* addr) 
{ 
    return reinterpret_cast<T>(addr); 
}

private:
    void* _addr;
};

/* works
template <typename T>
T func(void* addr) 
{ 
    return reinterpret_cast<T>(addr); 
}
*/ 


int main()
{ 
    void* s;
    int i;
    
    i = Log_Addr::func<int>(s);

    
    // *reinterpret_cast<int *>(s);
    
    //*static_cast<char *>(s);
    //*static_cast<float *>(s);
    
    return 0;
}
