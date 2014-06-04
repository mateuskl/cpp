class Alpha
{
public:
    template <typename T>
    Alpha(int (* entry)(T p), T p)
    {
        
    }
};


template <typename T>
class Beta : public Alpha
{
public:
    Beta() : Alpha(&entry, this)
    {
        
    }


    static int entry(Beta<T>* b)
    {
    }

};


int main()
{
    Beta<int> b;
    return 0;
}

