#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx = "; cin >> x;
    cout << "\ny = "; cin >> y;
    x != 0;
    y != 0;
    if (x == 0 && y == 0)
        cout << "\n X deve ser diferente de zero e y deve ser diferente de zero";
    else if (x > 0 && y > 0)
        cout << "\nquadrante I";
    else if (x < 0 && y > 0)
        cout << "\nquadrante II";
    else if (x < 0 && y < 0)
        cout << "\nquadrante III";
    else if (x > 0 && y < 0)
        cout << "\nquadrante IV";
    else
        cout << "\n X deve ser diferente de zero e y deve ser diferente de zero";
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
