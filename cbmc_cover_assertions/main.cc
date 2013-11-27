int foo(int a, int b)
{
    assert(2 == 2);
    int s = a + b;
    return s;
}


void bar()
{
    assert(4 == 5);
}


int main()
{
    int s = foo(1, 3);
}
