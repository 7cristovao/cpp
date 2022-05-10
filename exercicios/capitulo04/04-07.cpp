#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     bool a, b, c, d, e;
     a  =  ((8 > 3) && (4 != 3));
// true :     true  &&    true
     b  = (((4 + 2) <= 10) || (33 != (10 * 3)));
//      :      6    <= 10  ||  33 !=    30
// true :         true     ||    true
     c  = !true;
//false : false      
     d  = (!(4 > 2) || (4 > 2));
//true  :  false    ||  true
     e  = (!(4 > 2) && (4 > 2));
//false :  false    &&  true
     cout << "\na=" << a << "\nb=" << b << "\nc=" << c << "\nd=" << d << "\ne=" << e << endl;
    return 0;
}
