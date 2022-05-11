#include <iostream>
#include <cmath>

using namespace std;

unsigned int fatorial (unsigned int n);

int main(int argc, char *argv[])
{
    double n;
    cout << "digite n: ";
    cin >> n;
    cout << fatorial(n) << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

unsigned int fatorial (unsigned int n)
{
    if (n <= 1) return 1;
    else return n * fatorial (n - 1);
}
