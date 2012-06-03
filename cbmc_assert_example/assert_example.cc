#ifndef CBMC
#include <cassert> // cbmc should not include this

#endif

#include <cstdlib>
#include <ctime>

#include "alpha.h"

int getN()
{
    assert(10 < 222);
    return 1 + 1;
}

int main() 
{
    /* If use only this, 0 VCCs remain after simplification
     */
    // assert(getN() == 2);

    /* a function is checked only if it is used */
    getN();

    sum(2,1);

    /* This does not hold */
    /*
    std::srand(time(0)); //use current time as seed for random generator
    int uniform_random_variable = std::rand();
    assert(uniform_random_variable == 2);
    */

    return 0;
}
