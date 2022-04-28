#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{

//        180 r 
//  g =  -------
//         pi

    double g, r;
    cout << "angulo em radianos = "; cin >> r;
    r = (g * M_PI) / 180;
    cout << "angulo em graus = " << g;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
