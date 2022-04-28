#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

//  x = 4 * 3 / 6 * 8 / 4 
    system("read -p 'x =4*3/6*8/4' var");

    double x;
    x = 4 * 3 / 6 * 8 / 4;
    cout << "x = " << x;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
