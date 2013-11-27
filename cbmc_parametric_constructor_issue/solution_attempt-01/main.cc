class Level
{
public:
 
    template <typename T>
    Level(T a)
    {   
    }

};


int main()
{
    Level::Level<int>(3);
    
    
    return 0;
}


