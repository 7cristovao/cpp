#include <iostream>
#include <cmath>

// declaracao da funcao
void Retangulo(double B, double H, double &A, double &P);

using namespace std;

int main (int argc, char *argv[])
{
    double B, H, A, P;
    cout << "digite B: "; cin >> B;
    cout << "digite H: "; cin >> H;
    Retangulo (B, H, A, P);
    cout << "\n\n A = " << A;
    cout << "\n\n P = " << P << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;

}

// definicao da funcao
void Retangulo(double B, double H, double &A, double &P)
{
    A = B * H; // area do retangulo
    P = 2.0 * (B + H); // perimetro do retangulo
}

