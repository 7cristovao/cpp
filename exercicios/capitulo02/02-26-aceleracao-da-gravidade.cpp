#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    
    double a, g, t;
    cout << "altura (a)= ";
    cin >> a;
    cout << "tempo (t)= ";
    cin >> t;
    g = (2*a)/(t*t);
    cout << "\naceleracao da gravidade = " << g;
    cout << "\n";
    return 0;
}

