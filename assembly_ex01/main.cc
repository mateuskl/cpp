#include <iostream>

using namespace std;

static int v;

extern "C" { void subtraction(int a, int b); }

void subtraction(int a, int b)
{
    v = a - b;
}

void sub_caller(int a, int b)
{
    __asm__ __volatile__(   "pushl %ebp\n" // decreases sp in 8 since it is a 64-bit machine
                            "movl %esp, %ebp\n"
                            "pushl 16(%ebp)\n" // b
                            "pushl 12(%ebp)\n" // a
                            "call subtraction\n"
                            "addl $8, %esp\n"
                            "popl %ebp\n"
                        );
}


int main()
{
    sub_caller(3, 39);
    cout << v << endl;
    return 0;
}
