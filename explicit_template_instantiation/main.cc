#include <alpha.h>

int main()
{
	Alpha<int>* a = new Alpha<int>();
    a->foo();
	delete a;
}
