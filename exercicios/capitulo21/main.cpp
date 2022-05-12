#include <iostream>
#include <cmath>
#include "Complexo.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Exemplo 01:
    // Chamada implicita ao Construtor Padrao.
    Complexo z1;
    cout << "z1 = " << z1.mostra() << endl;
    // Chamada implicita ao COnstrutor com dois doubles
    Complexo z2(1.0, 2.0);
    cout << "z2 = " << z2.mostra() << endl;
    // Exemplo 02:
    // Chamada explicita ao Construtor com dois doubles
    Complexo z3 = Complexo(3.0, 4.0);
    cout << "z3 = " << z3.mostra() << endl;
    // Chamada explicita ao Construtor Padrao
    Complexo z4 = Complexo ();
    // Chamada ao operador de soma e ao Atribuidor
    z4 = z2 + z3;
    cout << "z4 = z2 + z3 = " << z4.mostra() << endl;
    // Exemplo 03:
    // Chamada implicita ao Construtor de Copia
    Complexo z5(z4);
    cout << "z5 = " << z5.mostra() << endl;
    // Exemplo 04:
    // Chamada ao operador de soma e chamada explicita ao 
    // Construtor de Copia.
    Complexo z6 = Complexo(z2 + z3);
    cout << "z6 = " << z6.mostra() << endl;
    // Exemplo 05
    // Chamada implicita ao Construtor com dois doubles
    Complexo z7(-1.0, -1.0);
    // Duas chamadas ao Atribuidor
    z5 = z6 = z7;
    cout << "z5 = " << z5.mostra() << endl;
    cout << "z6 = " << z6.mostra() << endl;
    cout << "z7 = " << z7.mostra() << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}