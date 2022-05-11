#include <iostream>
#include <cmath>

using namespace std;
double FarenheitParaCelsius(double f)
{
    return ((5*f)-160)/9;
}

int main(int argc, char* argv[])
{
    
    double c, f;
    cout << "farenheit = ";
    cin >> f;
    c = FarenheitParaCelsius(f);
    cout << "\ncelsius = " << c;
    cout << "\n";
    return 0;
}

