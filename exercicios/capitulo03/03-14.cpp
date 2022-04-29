#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    double y;
    double x;
    cout << "x =";
    cin >> x;
    y = log(x)/log(M_E);
    cout << "y = " << y;
    return 0;
}
