#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cin >> a;                                         // [0]
    b = a + 1;         // [a+1]                       // [1]
    a %= 2;            // [a]         : a = a % 2     // [0]
    b %= 2;            // [b]         : b = b % 2     // [0]
    c = 3 * (a+b);     // [3*a + 3*b] : c = 3 * (a+b) // [3]
    cout << "\na = " << a << "\nb = " << b << "\nc = " << c << "\n" << endl;
    return 0;
}
