#ifndef CBMC
#include <cassert>
#include <iostream>

using namespace std;
#endif


int main(int argc, char **argv)
{
#ifndef CBMC
    cout << argv[1] << "," << argv[2] << endl;
#endif

    int dec[10];

    int m = (int) argv[1];

    for(int i = 0; i < m; i++) 
    {
        dec[i] = i;
    }

    return 0;
}

