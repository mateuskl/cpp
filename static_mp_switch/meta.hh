#ifndef __meta_h
#define __meta_h

template<bool condition, typename Then, typename Else>
struct IF
{ typedef Then Result; };

template<typename Then, typename Else>
struct IF<false, Then, Else>
{ typedef Else Result; };


/* Adapted from Generative Programming: Methods, Tools, and Applications
 * Krzysztof Czarnecki and Ulrich Eisenecker
 * http://c2.com/cgi/wiki?GenerativeProgrammingBook
*/
const int DEFAULT = ~(~0u >> 1); // Smallest int

struct Nil_Case {};

template <int tag_, typename Type_, typename Next_ = Nil_Case>
struct CASE
{
    enum { tag = tag_ };

    typedef Type_ Type;
    typedef Next_ Next;
};

template<int tag, typename Case>
class SWITCH
{
    typedef typename Case::Next Next_Case;
    enum
    {
        case_tag = Case::tag,
        found = (case_tag == tag || case_tag == DEFAULT)
    };

public:
    typedef typename IF<found,
                typename Case::Type,
                typename SWITCH<tag, Next_Case>::Result
            >::Result Result;
};

template<int tag>
class SWITCH<tag, Nil_Case>
{
public:
    typedef Nil_Case Result;
};

#endif
