#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double mf, f;
    cout << "\nmedia final = "; cin >> mf;
    cout << "\nfrequencia  = "; cin >> f;
    if (mf >= 5.0 && f >= 0.75)
        cout << "\naprovado\n";
    else
        cout << "\nreprovado\n";
    system("\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}
