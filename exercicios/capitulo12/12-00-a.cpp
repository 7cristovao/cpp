#include <iostream> // printf, scanf, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
// Aqui encontra-se a declaração da função (cabeçalho):
double Soma (double a, double b);
//---------------------------------------------------------

using namespace std;

int main(int argc, char *argv[])
{
    double x, y, z;
    printf("Informar 1o Numero: ");
    scanf("%lf", &x);
    printf("Informar 2o Numero: ");
    scanf("%lf", &y);
    z = Soma(x, y);
    printf("Soma = %lf\n", z);
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}

//---------------------------------------------------------
// Aqui encontra-se a declaração da função:
double Soma (double a, double b)
{
    double c;
    c = a + b;
    return c; // return(c);
    // ou tembém return a + b; ou return(a + b);
}
//---------------------------------------------------------

