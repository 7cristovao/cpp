#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, d, aux;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    cout << "\nd = "; cin >> d;
    if (a > b && a > c && a > d)
        cout << "\nmaior = " << a;
    if (b > a && b > c && b > d)
        cout << "\nmaior = " << b;
    if (c > a && c > b && c > d)
        cout << "\nmaior = " << c;
    if (d > a && d > b && d > c)
        cout << "\nmaior = " << d;
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
