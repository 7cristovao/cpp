#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

//      (B+b) * h  
//  A = --------------
//        2

//  A = a, B = m 

    double m, b, h, a;
    cout << "Base maior = "; cin >> m;
    cout << "Base menor = "; cin >> b;
    cout << "altura = "; cin >> h;
    a = ((m+b)*h)/2;
    cout << "Area do Trapezio = " << a;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
