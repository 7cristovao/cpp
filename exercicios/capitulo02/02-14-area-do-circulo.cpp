#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{

//        
//  a = pi * r^2;       c = 2 * pi * r
//        

    double a, r, c;
    cout << "raio = "; cin >> r;
    a = M_PI * r * r;
    c = 2 * M_PI * r;
    cout << "Area do Circulo = " << a;
    cout << "\nComprimento da Circunferencia = " << c;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
