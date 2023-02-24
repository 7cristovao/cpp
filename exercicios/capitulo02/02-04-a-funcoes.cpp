// mostre o valor de x após o comando ser executado
// a) x = 3 + 2 * 5 - 8 / 2

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

//  x = 3 + 2 * 5 - 8 / 2
    system("read -p 'x = 3 + 2 * 5 - 8 / 2' var");
 
    double x;
    x = 3 + 2 * 5 - 8 / 2;
    cout << "x = " << x;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
