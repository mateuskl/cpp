#include <iostream>

#include "meta.hh"

using namespace std;

enum
{
    ALPHA,
    BETA,
    THETA
};

struct Traits
{
    static const unsigned int M_Base = BETA;
};



class Alpha
{
public:
    void say_hello()
    {
        cout << "Alpha" << endl;
    }
};


class Beta
{
public:
    void say_hello()
    {
        cout << "Beta" << endl;
    }
};


class Theta
{
public:
    void say_hello()
    {
        cout << "Theta" << endl;
    }
};

class M : public SWITCH<Traits::M_Base,
                    CASE<ALPHA, Alpha,
                    CASE<BETA, Beta,
                    CASE<THETA, Theta,
                    CASE<DEFAULT, void > > > >
                >::Result
{
};

int main()
{
    M* m = new M();
    m->say_hello();
    delete m;
    return 0;
}
