#include <iostream>
#include <cstdlib> // para a funcao rand()
#include <cmath>
#include "Valores.h"

using namespace std;

int main(int argc, char *argv[])
{
    Valores x;
    int m;
    int n;
    n = 200; // Tamanho da Matriz x
    cout << "\nleValores: ";
    leValores(x, m, n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void leValores(Valores &x, int m, int n)
{
    if(m < 1) m = 1;
    else if(m > L) m = L; // Valida as linhas
    if(n < 1) n = 1;
    else if(n > C) n = C; // Valida as colunas
    for(int i = 0; i < m; i++){ // Varia de 0 a m-1
        for(int j = 0; j < n; j++){ // Varia de 0 a n-1
            cout << "Comp.[" << i << ", " << j << "]";
            cin >> x[i][j];
        }
    }
}