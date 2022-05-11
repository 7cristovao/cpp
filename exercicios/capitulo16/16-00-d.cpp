// Vetores, constantes definidas
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    const int QTDITENS = 100; // (1)
    int a[QTDITENS];
    for(int i = 0; i < QTDITENS; i ++)
    a[i] = -1;
    cout << a << endl;
    system("read -p 'Aperte Enter para continuar', var");
    return 0;
}

// (1) Esta constante permite manipular
// a quantidade de elementos do arranjo 
// se a quanidade de elementos aumentar 
// ou diminuir, a alteracao desta constante 
// ira atualizar todo o programa
// em uma nova compilacao