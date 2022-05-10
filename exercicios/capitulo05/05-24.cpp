#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a,b,c;
    a=b=c=3;
    cout << "\na=" << a;
    cout << "\nb=" << b;
    cout << "\nc=" << c;
    bool d, e, f, g;
    d = (a==b==c);
    e = (a==b);
    f = (b==c);
    g = (a==c);
    cout << "\nd=" << d;
    cout << "\ne=" << e;
    cout << "\nf=" << f;
    cout << "\ng=" << g;
    if (a==b==c)              
        cout << "Iguais";
    else
        cout << "\nDiferentes" << endl;
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
} 
// a==b==c retorna falso, por isso SENAO foi invocado
// operador de atribuicao (=) eh diferente de operador logico (==)

