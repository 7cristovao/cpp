#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     bool a, b, c, d, e;
     a  =  ((8 + 3) <= (4 * 3));
// true :      11   <=   12
     b  = (33 != 10 * 3);
// true :  33 !=   30
     c  = (8 == (10 - 2));
// true :  8 ==   8
     d  = ((9 % 3) >= 0);
// true :     0    >= 0
     e  = (1 < 2);
// true :  1 < 2
     cout << "\na=" << a << "\nb=" << b << "\nc=" << c << "\nd=" << d << "\ne=" << e << endl;
    return 0;
}
