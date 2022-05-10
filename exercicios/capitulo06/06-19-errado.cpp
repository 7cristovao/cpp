#include <iostream>
#include <cmath>
using namespace std;
int main (int argc, char *argv[])
{
    double x, y;
    cout << "x = "; cin >> x;
    if (x>=0)
        y = sqrt(x);
    if (x<0)
        y = "Nao existe funcao definida!"; // nao funciona pq nao invocou COUT
    cout << "y = " << y << endl; // linha 12 deveria estar apos a linha NOVE
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
