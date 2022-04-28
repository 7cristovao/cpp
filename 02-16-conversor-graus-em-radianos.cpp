#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{

//      g * pi   
//  r = ------
//       180

    double g, r;
    cout << "angulo em graus = "; cin >> g;
    r = (g * M_PI) / 180;
    cout << "radianos = " << r;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
