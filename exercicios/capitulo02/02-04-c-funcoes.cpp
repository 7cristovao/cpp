// Mostre o valor de X após o comando ser executado
// x = ((3+2)*5-10)/3

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

//  x = ((3+2)*5-10)/3
    system("read -p 'x = ((3+2)*5-10)/3' var");
 
    double x;
    x = ( ( 3 + 2 ) * 5 - 10 ) / 3;
    cout << "x = " << x;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
