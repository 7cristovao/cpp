// Arquivo Vetores.cpp
//--------------------------------------------------------------------------------------
#include <cstdlib> // para a funcao rand()
#include "Vetores.h"
//--------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    Vetor v;
    sortear(v,n);
    cout << "\nsoma = " << soma(v,n);
    cout << "\nquantPos = " << quantPos(v,n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void sortear(Vetor &v, int n)    // - sortear os n (1 <= n <= 30) componentes 
{
    if (n < 1) n = 1;
    else if(n > MAX) n = MAX;    // Valida a entrada
    for(int i = 0; i < n; i++)   // Varia de 0 ateh n-1
        v[i] = rand() % 51 - 20; // Sorteia os componentes
} 
int soma(Vetor &v, int n)          // - calcula a soma de todos n primeiros componentes
{
    if(n < 1) n = 1;
    else if(n > MAX) n = MAX;      // Valida a entrada
    int s = 0;
    for (int i = 0; i < n; i++)    // Varia de 0 até n-1
        s += v[i];                 // Acumulador
    return s;
}
int quantPos(Vetor &v, int n)  // - calcular a quantidade de componentes positivos
                               //   dentre os n primeiros componentes.
{
    if(n < 1) n = 1;
    else if (n > MAX) n = MAX; // Valida a entrada
    int q = 0;
    for(int i = 0; i < n; i++) // Varia de 0 a n-1
        if (v[i] >= 0) q++;    // +1 em caso positivo
    return q;
}