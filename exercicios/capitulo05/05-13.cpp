#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c;
    cout << "\na= "; cin >> a;
    cout << "\nb= "; cin >> b;
    cout << "\nc= "; cin >> c;
    bool A, B, C;
    A = (a < b + c);
    B = (b < a + c);
    C = (c < a + b);
    cout << "\nA= " << A;
    cout << "\nB= " << B;
    cout << "\nC= " << C;
    if (A == true && B == true && C == true)
        cout << "\ntriangulo existe\n\n";
    else
        cout << "\ntriangulo nao existe\n\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}   
