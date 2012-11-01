/* Experiments conducted using
 g++ -v
 Using built-in specs.
 Target: i486-linux-gnu
 Configured with: ../src/configure -v --with-pkgversion='Debian 4.4.5-8' --with-bugurl=file:///usr/share/doc/gcc-4.4/README.Bugs --enable-languages=c,c++,fortran,objc,obj-c++ --prefix=/usr --program-suffix=-4.4 --enable-shared --enable-multiarch --enable-linker-build-id --with-system-zlib --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --with-gxx-include-dir=/usr/include/c++/4.4 --libdir=/usr/lib --enable-nls --enable-clocale=gnu --enable-libstdcxx-debug --enable-objc-gc --enable-targets=all --with-arch-32=i586 --with-tune=generic --enable-checking=release --build=i486-linux-gnu --host=i486-linux-gnu --target=i486-linux-gnu
 Thread model: posix
 gcc version 4.4.5 (Debian 4.4.5-8)
 */ 

template<typename T>
T sum(T a, T b)
{
    return a + b;
}


template<typename T>
T sum2(int a, int b)
{
    return a + b;
}


template<typename T>
int sum3(int a, int b)
{
    return a + b;
}


int main()
{
    /* Does not need to explicity state the type of a and b */
    int a = 2;
    int b = 3;
    int c = sum(a,b);

    float m = 2.0;
    float n = 3.0;
    float o = sum(m,n);

    char x = 2;
    char y = 3;
    char z = sum(x,y);

    /* Anyways it is not wrong to do so */
    int d = sum<int>(a,b);

    /* However this not compiles */
    // int e = sum2(a,b); // error: no matching function for call to ‘sum2(int&, int&)’
    int e = sum2<int>(a,b); // But this does!

    /* 1st conclusion: When the parametric type is related to the return type
     * of a function it must be made explicit on the function calling.
     */ 



    // int f = sum3(a,b); // error: no matching function for call to ‘sum3(int&, int&)’
    int f = sum3<double>(a,b); // compiles OK


    /* 2nd conclusion: The parametric type must be infered on the function
     * signature, otherwise it sould be made explicit on the function calling.
     */ 
    
    return 0;
}






