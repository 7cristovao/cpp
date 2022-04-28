#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    
    double f, k;
    cout << "farenheit = ";
    cin >> f;
    k = (f + 459.67) / 1.8;
    cout << "\nkelvin = " << k;
    cout << "\n";
    return 0;
}

