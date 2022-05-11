//Arquivo Funcoes.cpp
#include <iostream>
//-------------------------------------------
#include "Funcoes.h"
//-------------------------------------------
using namespace std;

int main(int argc, char *argv[])
{
    unsigned int n;
    cout << "digite n: "; cin >> n;
    cout << "\nfatorial (n) = " << fatorial (n);
    cout << "\nfibonacci (n) = " << fibo (n) << endl;
    system ("read -p 'Aperte Enter para continuar' var");
    return 0;
}

//-------------------------------------------
unsigned int fatorial (unsigned int n)
{
    if (n <= 1) return 1;
    else{
        int f = 1;
        for(unsigned int i = 2; i <= n; i++)
            f *= i;
        return f;
        }
}
//-------------------------------------------
unsigned int fibo (unsigned int n)
{
    if (n <= 1) return n;
    else{
        int x = 0, y = 1, z = 1;
        for(int i = 2; i <= n; i++){
            x = y;
            y = z;
            z = x + y;
        }
        return z;
    }
}
//-------------------------------------------
