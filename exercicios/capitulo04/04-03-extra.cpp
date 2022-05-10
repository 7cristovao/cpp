#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cin >> a;                                         // [0]
    cout << "\na = " << a;
    b = a + 1;         // [a+1]                       // [1]
    cout << "\nb = a + 1 : " << b;
    a %= 2;            // [a]         : a = a % 2     // [0]
    cout << "\na %= 2 : " << a;
    b %= 2;            // [b]         : b = b % 2     // [0]
    cout << "\nb %= 2 : " << b;
    c = 3 * (a+b);     // [3*a + 3*b] : c = 3 * (a+b) // [3]
    cout << "\nc = " << c << "\n" << endl;
    return 0;
}
