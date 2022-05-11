// Arquivo Funcoes.cpp
//------------------------------------
#include "Funcoes.h"
#include <cmath>
//------------------------------------
using namespace std;
//------------------------------------
DP f(const DP x)
{
    return cos(x) - x;
}
//------------------------------------
void g(const DP x, DP &y, DP &yL)
{
    y = x * x - 2.0; // Funcao
    yL = 2 * x;      // Derivada
}
//------------------------------------