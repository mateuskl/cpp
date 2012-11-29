template <typename T,
          typename El>
class Alpha
{
private:
    void invariants() const
    {
    }


};



int main()
{
    Alpha<int,int>* a = new Alpha<int,int>();
    a->invariants();
    delete a;
    
    return 0;
}

