#include <iostream>
#include <cmath>

// declaracao da funcao
void Troca (int& a, int& b);

using namespace std;

int main (int argc, char *argv[])
{
    int a, b;
    cout << "\ndigite a: "; cin >> a;
    cout << "\ndigite b: "; cin >> b;
    Troca (a, b);
    cout << "\na = " << a;
    cout << "\nb = " << b << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

// definicao da funcao
void Troca (int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
