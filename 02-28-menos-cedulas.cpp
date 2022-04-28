#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y, w, z; 
    int x1, x2, x3, x4, x5, x6;
    int w1, w2, w3, w4, w5, w6, w7;
    int z1, z2, z3, z4, z5, z6;
    cout << "Valor inteiro do produto (y)= ";
    cin >> y;

    w = 100;
    w2 = 50;
    w3 = 20;
    w4 = 10;
    w5 = 5;
    w6 = 2;
    w7 = 1;
    x=y/w;
    
    z=y%w;
    x1=z/w2;
    z1=z%w2;
    x2=z1/w3;
    z2=z1%w3;
    x3=z2/w4;
    z3=z2%w4;
    x4=z3/w5;
    z4=z3%w5;
    x5=z4/w6;
    z5=z4%w6;
    x6=z5/w7;
    z6=z5%w7;

    cout << x;
    cout << "= x(notas de 100)\n";
    cout << x1;
    cout << "= x1(notas de 50)\n";
    cout << x2;
    cout << "= x2(notas de 20)\n";
    cout << x3;
    cout << "= x3(notas de 10)\n";
    cout << x4;
    cout << "= x4(notas de 5)\n";
    cout << x5;
    cout << "= x5(notas de 2)\n";
    cout << x6;
    cout << "= x6(notas de 1)\n";
    
    system("read -p 'Aperte qualquer tecla para continuar...' var");
    return 0;
}
