class Level
{
public:

    Level(unsigned int a) : _v(a) {}
     
    template <typename T>
    Level operator + (T a)
    {
        return _v + static_cast<unsigned int>(a);
    }

private:
    unsigned int _v;
};


int main()
{ 
    Level m(3);
    unsigned int n = 2;

    Level s = m + n;
    
    
    
    return 0;
}


