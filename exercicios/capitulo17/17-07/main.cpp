#include <iostream>
#include <cmath>
#include <cstdlib> // para a funcao rand()
#include "Taxas.h"

using namespace std;

int main(int argc, char *argv[])
{
    Taxas x;
    int indi;
    int indj;
    int n = 200; // Tamanho da Matriz x
    cout << "\nindiceMaior: ";
    indiceMaior(x, n, indi, indj);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}