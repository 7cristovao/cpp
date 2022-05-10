#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a = 3.0, b = 12.6, c;
    a *= 2;    // [6.0] : a = a * 2
    b /= a;    // [2.1] : b = b / a 
    c = a - b; // [3.9] : c = a - b
    cout << "\na= " << a << "\nb= " << b << "\nc =" << c << "\n";
    return 0;
}
