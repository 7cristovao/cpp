#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x > 0)
    {
        y = ((pow(x,2)+4)/x)+log(x)+sqrt(x+3);
        cout << "\ny= " << y;
    }
    else
        cout << "\nnao existe funcao definida";
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
