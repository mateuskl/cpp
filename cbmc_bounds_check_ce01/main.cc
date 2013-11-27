#ifndef CBMC
#include <cassert>
#endif

int main() 
{
    int dec[10];

    for(int i = 0; i < 10; i++) 
    {
        dec[i] = i;
    }
    
    dec[10] = 55;

    return 0;
}

