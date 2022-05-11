#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, A;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    A = sqrt((a+(b+c))*(c-(a-b))*(c+(a-b))*(a+(b-c)))/4;
    if ((a+(b+c))*(c-(a-b))*(c+(a-b))*(a+(b-c)) >= 0 && a >=b && a >=c)
        cout << "\nA = " << A;
    else 
        cout << "\nAelse = indeterminado";
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
