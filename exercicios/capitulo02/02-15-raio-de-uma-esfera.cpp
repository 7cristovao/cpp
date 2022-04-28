#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{

//        
//  v = 4/3 * pi * r ^ 3  
//        

    double v, r;
    cout << "raio da esfera = "; cin >> r;
    v = 4/3 * M_PI * r * r * r;
    cout << "Volume da Esfera = " << v;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
