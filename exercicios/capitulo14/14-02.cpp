#include <iostream>

void exibe(double a, double b);

using namespace std;

int main(int argc, char *argv[])
{
    double a, b;
    cin >> a;
    cin >> b;
    exibe(a,b);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void exibe(double a, double b)
{
    while (a <= b) {
        cout << a << endl;
        a += b; // a = a + b
    }
}

