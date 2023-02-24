// Mostre o valor de X após o comando ser executado
// b) x = 9 % 2 + 9 / 2

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

//  x = 9 % 2 + 9 / 2
    system("read -p 'x = 9 % 2 + 9 / 2' var");
 
    double x;
    x = 9 % 2 + 9 / 2;
    cout << "x = " << x;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
