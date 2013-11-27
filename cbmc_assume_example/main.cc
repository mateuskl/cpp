void f()
{
  int x = 8;
  //__CPROVER_assume((x&1)&2);
  __CPROVER_assume((x > 1) && (x < 10));
  assert(0);
  //....


}

void g()
{
  int x = 8;
  //__CPROVER_assume((x&1)&2);
  __CPROVER_assume((x > 1) && (x < 10));
  assert(0);
  //....


}


int main()
{
    f();
    g();
} 

