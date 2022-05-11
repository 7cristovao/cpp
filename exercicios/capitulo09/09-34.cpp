#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double b, h, a; int i, n;
    cout << "n = "; cin >> n;
    for (i = 1; i <= n; i++);
    {
        cout << "base = "; cin >> b;
        cout << "altura = "; cin >> h;
        a = b*h/2.0;
        cout << "area = " << a << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
