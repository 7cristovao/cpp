#include <iostream>

int quantMul(double a, double b, double x);

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, x;
    cin >> a >> b >> x;
    cout << quantMul(a,b,x) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

int quantMul(double a, double b, double x)
{
    int q = 0;            // Quantidade de multiplos
    double mx = x;        // Primeiro multiplo
    while(mx <= b) {      
        if(a <= mx) q++;
        mx += x;          // Proximo multiplo
    }
    return q;
}
