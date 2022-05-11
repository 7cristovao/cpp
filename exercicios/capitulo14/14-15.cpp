#include <iostream>
#include <cmath>

void LeAba(double &a);
void LeEspessura(double &t, double a);

using namespace std;

int main(int argc, char *argv[])
{
    double a, t;
    LeAba(a);
    LeEspessura(t,a);
    cout << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void LeAba(double &a) // Passagem por referencia
{
    do{
        cout << "Valor de aba externa (cm): ";
        cin >> a;
    }while(a <= 0.0);
    // A aba externa deve ser positiva e nao nula
}

void LeEspessura(double &t, double a)
{
    do{
        cout << "Valor da espessura (cm): ";
        cin >> t;
    } while(t <= 0.0 || t > a);
    // A espessura deve ser positiva, nao nula
    // e menor ou igual a aba externa
}
