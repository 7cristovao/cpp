#include <iostream>
#include <cmath>

using namespace std;

//declaracao da funcao
//----------------------------------------
unsigned int funcaof (unsigned int n);
unsigned int funcaog (unsigned int n);
//----------------------------------------

int main(int argc, char *argv[])
{
    double n;
    cout << "digite n: ";
    cin >> n;
    cout << "f(n) = " << funcaof(n) << endl;
    cout << "g(n) = " << funcaog(n) << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

//definicao da funcao
//----------------------------------------
unsigned int funcaof (unsigned int n)
{
    if (n == 1) return 2;   
    else if (n == 2) return 1;   
    else if (n >= 3) return 2 * funcaof (n - 1) + funcaog (n - 2);
    else return 0;

}
//----------------------------------------
unsigned int funcaog (unsigned int n)
{
    if (n == 1) return 1;   
    else if (n == 2) return 2;   
    else if (n >= 3) return funcaog (n - 1) + 3 * funcaof (n - 2);
    else return 0;
}
//----------------------------------------
