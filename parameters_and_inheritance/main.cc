class A
{
protected:
    int _m;
};

class B: public A
{
public:
    void foo(B * b)
    {
        int c = b->_m; // OK
    }

protected:
    int _n;
};

class C: public B
{
public:
    void bar()
    {
        int c = _m; // OK
    }

    void foo()
    {
        int c = _m; // OK
    }

    void rod()
    {
        int c = _m + _n; // OK
    }

    void lam(B * b)
    {
        int c = b->_n; // Not OK
    }

    void bam(B * b)
    {
        int c = b->_m; // Not OK
    }

};

int main()
{
    return 0;
}
