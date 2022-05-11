#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a,b,c;
    int n, i;
    cin >> n;
    for (i=1; i<=n; i++)
    {
    cout << "\nlado a = "; cin >> a;
    cout << "\nlado b = "; cin >> b;
    cout << "\nlado c = "; cin >> c;
    cout << a << "; " << b << "; " << c << "\n";
    if (a == b && a == c && b == c)
        cout << "\nequilatero";
    else if (a != b && a != c && b != c)
        cout << "\nescaleno";
    else
        cout << "\nisoceles";
    cout << "\n" << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
