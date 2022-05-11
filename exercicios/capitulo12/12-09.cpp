#include <iostream>
#include <cmath>

// declaracao da funcao
// ----------------------------------
void Troca (double& a, double& b);
// ----------------------------------

using namespace std;

int main (int argc, char *argv[])
{
    double a, b, temp;
    cout << "\ndigite a: "; cin >> a;
    cout << "\ndigite b: "; cin >> b;
    Troca (a, b);
    cout << "\n\na = " << a;
    cout << "\n\nb = " << b;
    cout << "\n\ntemp = " << temp << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;

}

// definicao da funcao
// ----------------------------------
void Troca (double& a, double& b)
// ----------------------------------
{
    double temp = a;
    a = b;
    b = temp;
}

