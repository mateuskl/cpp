class Alpha
{
public:
    operator int () 
    {
        return 88;
    }
};

int main() 
{
    Alpha entry;
    static_cast<unsigned long>(entry);    
    
    return 0;
}

