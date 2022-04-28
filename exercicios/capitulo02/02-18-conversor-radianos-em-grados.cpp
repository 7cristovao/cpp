#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    double g, r, grados;
    cout << "angulo em radianos = ";
    cin >> r;
    g = r * 180 / M_PI;
    grados = (2 * M_PI * r)/400;
    cout << "\nangulo em graus = " << g;
    cout << "\nangulo em grados = " << grados;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
