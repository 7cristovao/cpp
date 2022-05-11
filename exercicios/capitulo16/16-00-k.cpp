// Vetores
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    typedef double Vetor[20];
    typedef int Lista[10];
    typedef float Arranjo[30];
    typedef char Frase[15];

    Vetor v1, v2;
    Lista li, sta;
    Arranjo x, y[10];
    Frase f;

    // indices 0 1 ... 18 19
    // v1      d d      d  d
    
    // indices 0 1 ... 18 19
    // v2      d d      d  d
    
    // indices 0 1 ...  8  9
    // li      i i      i  i

    // indices 0 1 ...  8  9
    // sta     i i      i  i

    // indices 0 1 ... 28 29
    // x       f f      f  f

    // indices 0 1 ...  8  9
    // y       f f      f  f

    // indices 0 1 ... 13 14
    // f       c c      c  c

    system("read -p 'Aperte Enter para continuar', var");
    return 0;
}