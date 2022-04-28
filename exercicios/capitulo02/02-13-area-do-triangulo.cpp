#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

//      b * h  
//  a = -----
//        2

    double b, a, h;
    cout << "base = "; cin >> b;
    cout << "altura = "; cin >> h;
    a = ((b*h)/2);
    cout << "Area do Triangulo = " << a;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
