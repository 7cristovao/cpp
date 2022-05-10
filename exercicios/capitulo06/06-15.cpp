#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx = "; cin >> x;
    cout << "\ny = "; cin >> y;
    if (x == 0 && y == 0)
        cout << "\norigem dos eixos (0,0)";
    else if (x > 0 && y > 0)
        cout << "\nquadrante I";
    else if (x < 0 && y > 0)
        cout << "\nquadrante II";
    else if (x < 0 && y < 0)
        cout << "\nquadrante III";
    else if (x > 0 && y < 0)
        cout << "\nquadrante IV";
    else
        cout << "\nsobre um dos eixos";
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
