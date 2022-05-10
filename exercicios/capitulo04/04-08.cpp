#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     int a, b, c;
     a = 2;                    //     condicao      ? se verd : se falso
     b = 3;                    //      
     c = 2*a > 3*b ? a+b : b;  // c = 2*[2] > 3*[3] ? [2]+[3] : [3]
     cout << "\na=" << a << "\nb=" << b << "\nc=" << c << "\n" << endl;
    return 0;
}
