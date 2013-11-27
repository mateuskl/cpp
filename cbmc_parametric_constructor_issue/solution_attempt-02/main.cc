class Level
{
public:
    template <typename T>
    static Level* create_Level(T a)
    {   
    }
    
private:
 
    template <typename T>
    Level(T a)
    {   
    }

};


int main()
{
    Level::create_Level<int>(3);
    
    
    return 0;
}


