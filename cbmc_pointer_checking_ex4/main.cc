#include <alpha.hh>

int main()
{
    Alpha* a = new Alpha();
    a->doit();
    delete a;

    Alpha* b = new Alpha();
    b->foo();
    delete b;

    return 0;
}
