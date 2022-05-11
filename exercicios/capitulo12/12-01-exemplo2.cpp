#include <iostream>
#include <cmath>

using namespace std;

// descricao da funcao
// ---------------------------------------
float Media (float a, float b, float c);
//----------------------------------------

int main(int argc, char *argv[])
{
    double a, b, c;
    cout << "digite a: "; cin >> a;
    cout << "digite b: "; cin >> b;
    cout << "digite c: "; cin >> c;
    cout << Media(a, b, c) << endl;
    system("\n\n read -p 'Aperte qualquer tecla para continuar...' var");    
    return 0;
}

// definicao da funcao
//-----------------------------------------
float Media (float a, float b, float c)
{
    float m;              
    m = (a + b + c) / 3;
    return m;
}
//-----------------------------------------
