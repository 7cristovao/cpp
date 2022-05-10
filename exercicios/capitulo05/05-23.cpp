#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x;
    x = 5;
    if (x<0)              
        cout << "Negativo";
    if (x=0)
        cout << "Nulo";
    if (x>0)
        cout << "Positivo";
    // linha 11 tem um sinal de igual (=) de atribuicao, 
    // para resolver precisa colocar um sinal de igual (==) de comparacao
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
