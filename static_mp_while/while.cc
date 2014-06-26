/* Examples adapted from Generative Programming: Methods, Tools, and Applications
 * Krzysztof Czarnecki and Ulrich Eisenecker
 * http://c2.com/cgi/wiki?GenerativeProgrammingBook
*/

#include <iostream>

using namespace std;

// Figure 10-26 IF implementation using partial template specialization --------
template<bool condition, class Then, class Else>
struct IF {
    typedef Then RET;
};

template<class Then, class Else>
struct IF<false, Then, Else> {
    typedef Else RET;
};
// -----------------------------------------------------------------------------

// Figure 10-48 New statement for the while-loop computing Fibonacci numbers ---
template<int i_, int x_, int y>
struct FibStat {
    enum {
        i = i_,
        x = x_
    };
    typedef FibStat<i + 1, x + y, x> Next;
};
// -----------------------------------------------------------------------------

// Figure 10-49 New condition for the while-loop computing Fibonacci numbers ---
template<int n>
struct FibCond {
    template<class Statement>
    struct Code {
        enum { RET = Statement::i < n };
    };
};
// -----------------------------------------------------------------------------

// Figure 10-52 Final WHILE<> implementation -----------------------------------
namespace intimate {
    template<class Statement>
    struct STOP {
        typedef Statement RET;
    };    
}; // end of namespace intimate
template<class Condition, class Statement>
struct WHILE {
    typedef typename IF<Condition::template Code<Statement>::RET,
                        WHILE<Condition, typename Statement::Next>,
                        intimate::STOP<Statement>
                        >::RET::RET RET;
};
// -----------------------------------------------------------------------------

// Figure 10-50 Metafunction calling WHILE<> with the new condition and new statement
template<int n>
struct Fib {
    enum { RET = WHILE<FibCond<n>, FibStat<1, 1, 0> >::RET::x };
};
// -----------------------------------------------------------------------------



int main() {
    cout << "Fib<8>::RET " << Fib<8>::RET << endl;
}

