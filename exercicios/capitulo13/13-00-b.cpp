#include <iostream>
#include <cmath>

using namespace std;

unsigned int fibo (unsigned int n);

int main(int argc, char *argv[])
{
    double n;
    cout << "digite n: ";
    cin >> n;
    cout << fibo(n) << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

unsigned int fibo (unsigned int n)
{
    if (n <= 1) return n;
    return fibo(n - 2) + fibo (n - 1);
}
