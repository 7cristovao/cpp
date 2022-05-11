#include <iostream>
#include <cmath>

using namespace std;

double CelsiusParaFarenheit(double c)
{
    return ((9*c)/5)+32;
}

int main(int argc, char* argv[])
{
    double c, f;
    cout << "celsius = ";
    cin >> c;
    f = CelsiusParaFarenheit(c);
    cout << "\nfarenheit = " << f;
    cout << "\n";
    return 0;
}

