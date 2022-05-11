#include <iostream>

double serie();

using namespace std;

int main(int argc, char *argv[])
{
    cout << serie() << endl;    
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double serie()
{
    int i, c;
    double s, p;
    c = 1;            // Primeira parcela eh positiva
    i = 1;            // Contador de parcelas
    s = 0.0;          // Zere a soma
    p = 1.0;          // Primeira parcela eh 1
    while (p > 1E-04) { // Verifica precisao
        s += c * p;     // Adiciona parcela a soma
        i++;            // Calcula proxima parcela
        c = -c;         // Troca de sinal
        p = 1.0 / i;    // Formula do termo geral
    }
    return s;
}
