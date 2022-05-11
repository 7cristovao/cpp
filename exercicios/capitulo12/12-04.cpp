#include <iostream>
#include <cmath>

// declaracao da funcao
double GrauParaRadiano(double g);

using namespace std;

int main(int argc, char *argv[])

{
    double g;
    cout << "angulo em graus = "; cin >> g;
    cout << "Graus para radianos = " << GrauParaRadiano (g) << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}

// definicao da funcao
double GrauParaRadiano(double g)
{
    return g * M_PI / 180.0;
}
