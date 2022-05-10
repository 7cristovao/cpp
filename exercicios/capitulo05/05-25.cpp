#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c;         
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;                            
    if (a < b)
        if (a < c)
            cout << "\nmenor = " << a;
        else 
            cout << "\nmenor = " << c;
    else
        if (b < c)
            cout << "\nmenor = " << b;
        else
            cout << "\nmenor = " << c;
    cout << "\n menor" << endl;
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
