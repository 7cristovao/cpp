#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    a = 3; b = 8;
    a += 2; // [5] = a = a+2 
    b -= a; // [3] = b = b-a 
    c = a + b; // [8] = c = a + b
    cout << "\na= " << a << "\nb= " << b << "\nc= " << c << "\n";
    return 0;
}
