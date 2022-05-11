#include <iostream>
#include <cmath>

// declaracao da funcao
void Esfera(double R, double &A, double &V);

using namespace std;

int main (int argc, char *argv[])
{
    double R, V, A;
    cout << "digite R: "; cin >> R;
    Esfera (R, A, V); 
    cout << "\n\n A = " << A;
    cout << "\n\n V = " << V << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;

}

// definicao da funcao
void Esfera(double R, double &A, double &V)
{
    A = 4.0 * M_PI * R * R;
    V = A * R / 3.0;
}

