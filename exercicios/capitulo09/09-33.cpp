#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double b, h, a; int i, n;
    cout << "n = "; cin >> n;
    cout << "base = "; cin >> b;
    cout << "altura = "; cin >> h;
    for (i = 1; i <= n; i++)
        a = b*h/2.0;
    cout << "area = " << a << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
