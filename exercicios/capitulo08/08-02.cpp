#include <iostream>
#include <cmath>

using namespace std;

double RadianosParaGraus(double r)
{
    return 180*r/M_PI;
}

int main(int argc, char *argv[])
{

//        180 r 
//  g =  -------
//         pi

    double g, r;
    cout << "Digite o angulo em radianos = ";
    cin >> r;
    g = RadianosParaGraus(r);
    cout << "angulo em graus = " << g;
    cout << "\n";
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
