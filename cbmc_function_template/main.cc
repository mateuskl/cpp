class Alpha
{
public:
    template <typename T>
    void foo(T a)
    {
        a++;
    }


    template <typename T>
    T bar(T a)
    {
        return a++;
    }

};

int main()
{
    Alpha* alpha = new Alpha();

    /* This works well with g++ 4.4.5. But not with CBMC 4.2:
     *
     * file main.cc line 17: found no match for symbol `foo', candidates are:
     * template symbol  (file main.cc line 5)
     *
     * argument types:
     * class Alpha
     * int
     *
     * CONVERSION ERROR
     *
     */
    // alpha->foo(5);


    // However this works OK with g++ and CBMC
    alpha->foo<int>(5); 


    // alpha->bar(5); // OK with g++. No OK with CBMC
    alpha->bar<int>(5); // OK with both g++ and CBMC
    
    delete alpha;
    return 0;
}






