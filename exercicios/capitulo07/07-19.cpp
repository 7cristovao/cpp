#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, d;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    cout << "\nd = "; cin >> d;
    if (a < b && a < c && a < d)
        cout << "menor = " << a;
    else if (b < a && b < c && b < d)
        cout << "menor = " << b;
    else if (c < a && c < b && c < d)
        cout << "menor = " << c;
    else // (d < a && d < b && d < c)
        cout << "menor = " << d;
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
