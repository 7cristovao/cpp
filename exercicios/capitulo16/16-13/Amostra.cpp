#include <iostream> // printf, scanf, cin, cout,etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.
#include "Amostra.h"

using namespace std;

int main(int argc, char *argv[])
{
    Valores x;
    int n;
    cout << "Tamanho (máximo " << COMP << "): ";
    cin >> n;
    leValores(x, n);
    escreveValores(x, n);
    cout << "Média: " << media(x, n) << endl;
    cout << "Desvio Padrão: " << desvioPadrao(x, n) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void leValores(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP; // Valida a entrada
    for(int i = 0; i < n; i++) { // Varia de - a n-1
        cout << "Componente[" << i << "]=";
        cin >> x[i];
    }
}

void escreveValores(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP; // Valida a entrada
    for(int i = 0; i < n; i++) { // Varia de 0 a n-1
        cout << "Componente[" << i << "]=" << x[i] << endl;
    }
}

double media(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP;      // Valida a entrada
    double s = 0;
    for (int i = 0; i < n; i++)    // Varia de 0 até n-1
        s += x[i];                 // Acumulador
    //  s = s + x[i];
    return s / n;                   // media calculada
}

double desvioPadrao(Valores &x, int n)
{
    if(n < 1) n = 1;
    else if(n > COMP) n = COMP;      // Valida a entrada
    double sd = 0;
    for (int i = 0; i < n; i++)    // Varia de 0 até n-1
     //   s += x[i];                 // Acumulador
    sd += pow(x[i] - media(x, n),2);
    return sqrt( sd / (n - 1));  // desvio padrao calculado
}