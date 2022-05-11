#include <iostream>
#include <cstdlib> // para a funcao rand()
#include "Matrizes.h"

#include "main.cpp"

void sortear(Matriz &v, int n)
{
    if(n < 1) n = 1;
    else if(n > MAX) n = MAX;          // Valida a entrada
    for(int i = 0; i < n; i++)         // Varia de 0 até n - 1
        for(int j = 0; j < n; j++)     // Varia de 0 até n - 1
            v[i][j] = rand() % 51 - 20; // Sorteia
}
int soma(Matriz &mat, int n)
{
    if(n < 1) n = 1;
    else if(n > MAX) n = MAX; // Valida a entrada
    int s = 0;
    for (int i = 0; i < n; i++) // Varia de 0 até n-1
        for (int j = 0; j < n; j++) // Varia de 0 até n-1
            s += mat[i][j]; // Acumulador
}
int quantPos(Matriz &v, int n)
{
    if(n < 1) n = 1;
    else if(n > MAX) n = MAX; // Valida a entrada
    int q = 0;
    for (int i = 0; i < n; i++) // Varia de 0 até n-1
        for (int j = 0; j < n; j++) // Varia de 0 até n-1
            if (v[i][j] >= 0) q++; // 1+ em caso positivo
    return q;
}