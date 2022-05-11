#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    cout << "\nc = "; cin >> c;
    a = b*sqrt(1+pow((c/b),2));
    if (((1+pow((c/b),2))) >= 0 && b >=c)
        cout << "\na = " << a;
    else 
        cout << "\naelse = indeterminado";
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var"); 
    return 0;
}
