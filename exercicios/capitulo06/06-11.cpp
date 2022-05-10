#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double s, a, ir;
    cout << "\nsalario ="; cin >> s;
    if (s < 100.00)
        a = 0;
    else if (s >= 100.00 && s < 500.00)
        a = .10;
    else if (s >= 500.00 && s < 2000.00)
        a = .18;
    else
        a = .25;
    cout << "\naliquota = " << a;
    cout << "\nir = " << s*a;
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
