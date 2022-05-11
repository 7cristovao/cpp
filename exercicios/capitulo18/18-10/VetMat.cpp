#include <iostream> // para cin, cout, etc
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Produto escalar dos vetores dinamicos v1 e v2
    cout << "Dimensao dos vetores:...?";
    int d;
    cin >> d;
    TVet v1, v2; // Declaracao
    cout << "Produto escalar: " << ProdEsc(v1, v2, d) << endl;

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
double ProdEsc(TVet &x, TVet &y, int n)
{
    double pe = 0.0;
    for(int i = 0; i < n; i++)
        pe += x[i] * y[i];
    return pe;
}