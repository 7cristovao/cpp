#include <iostream>
#include <cstdlib> // para a funcao rand()
#include <cmath>
#include "Amostra.h"

using namespace std;

int main(int argc, char *argv[])
{
    Valores mat;
    int m;
    cout << "Linhas (máximo " << L << "): ";
    cin >> m;
    int n;
    cout << "Colunas (máximo " << C << "): ";
    cin >> n;
    leValores(mat, m, n);
    escreveValores(mat, m, n);
    cout <<"Média: " << media(mat, m, n) << endl;
    cout << "Desv. pad.: " << desvioPadrao(mat, m, n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void leValores(Valores &mat, int m, int n)
{
    if(m < 1) m = 1;
    else if(m > L) m = L; // Valida as linhas
    if(n < 1) n = 1;
    else if(n > C) n = C; // Valida as colunas
    for(int i = 0; i < m; i++){ // Varia de 0 a m-1
        for(int j = 0; j < n; j++){ // Varia de 0 a n-1
            cout << "Comp.[" << i << ", " << j << "]";
            cin >> mat[i][j];
        }
    }
}

void escreveValores(Valores &mat, int m, int n)
{
    if(m < 1) m = 1;
    else if(m > L) m = L; // Valida as linhas
    if(n < 1) n = 1;
    else if(n > C) n = C; // Valida as colunas
    for(int i = 0; i < m; i++){ // Varia de 0 a m-1
        for(int j = 0; j < n; j++){ // Varia de 0 a n-1
            cout << "Comp.[" << i << ", " << j << "]";
            cout << mat[i][j] << endl;
        }
    }
}

double media(Valores &mat, int m, int n)
{
   if(m < 1) m = 1;
   else if(m > L) m = L;      // Valida a entrada
   if(n < 1) n = 1;
   else if(n > C) n = C;      // Valida a entrada
    double s = 0;
    for (int i = 0; i < n; i++) {    // Varia de 0 até n-1
        for (int j = 0; j < n; i++) {    // Varia de 0 até n-1
        s += mat[i][j];                 // Acumulador [i][j]
        }
    }
    //  s = s + x[i][j];
    return s / m * n;                   // media calculada
}

double desvioPadrao(Valores &mat, int m, int n)
{
    if(m < 1) m = 1;
    else if(m > L) m = L;      // Valida a entrada
    if(n < 1) n = 1;
    else if(n > C) n = C;      // Valida a entrada
    double s = 0;
    for (int i = 0; i < n; i++) {    // Varia de 0 até n-1
        for (int j = 0; j < n; j++) { 
    //   s += x[i][j];                 // Acumulador
        s += pow(mat[i][j] - media(mat, m, n),2);
        }
    }
    return sqrt( s / m * (n - 1));  // desvio padrao calculado 
}