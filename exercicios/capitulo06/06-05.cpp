#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char *argv[])
{
    double x, y;
    cout << "\nx= "; cin >> x;
    if (x != 5)
    {
        y = (2*pow(x,2)-3)/(x-5);
        cout << "\ny= " << y;
    }
    else
       cout << "\nnao existe funcao definida"; 

    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
