#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    bool c;
    a = 2;          // [2]  :  a
    b = 3;          // [3]  :  b
    c = (++a == b); //  c   : (a  +   1 =  a  ==  b )
                    //       ([2] +   1 = [3] == [3]) : true
    cout << "\na = " << a << "\nb = " << b << "\nc = " << c << "\n" << endl;
    return 0;
}
