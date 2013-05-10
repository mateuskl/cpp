#include <iostream>

using namespace std;

class Alpha
{
public:
    virtual void foo(int i)
    {
        cout << "Alpha::foo(int)" << endl;
    }

    virtual void foo(char c)
    {
        cout << "Alpha::foo(char)" << endl;
    }

    virtual void foo(float f)
    {
        cout << "Alpha::foo(float)" << endl;
    }

    virtual void foo(const char* c)
    {
        cout << "Alpha::foo(string)" << endl;
    }
    
};

class Beta : public Alpha
{
public:
    void foo(int i)
    {
        cout << "Beta::foo(int)" << endl;
    }

    void foo(const char* c)
    {
        Alpha::foo(c);
    }
};

int main()
{
    Beta* b = new Beta();

    b->foo((int) 1);
    b->foo((char) 'A');
    b->foo((float) 1.0);
    b->foo((char *) "hi");

    Alpha* a = b;
    a->foo((int) 1);
    a->foo((float) 1.0);
    
    delete b;
    return 0;
}


