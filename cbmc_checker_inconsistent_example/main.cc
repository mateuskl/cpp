int main()
{
  int z;
  if(z)
  {
  __CPROVER_assume(!z);
  assert(0);
  }
}

