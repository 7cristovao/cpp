#include <iostream> // printf, scanf, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
void ExibeMsg(); // ou void ExibeMsg (void);
//---------------------------------------------------------

using namespace std;
int main(int argc, char *argv[])
{
   int I = 7;
   int &RefI = I;
   // I é uma variável do tipo int e RefI é uma referên-
   // cia para tal variável. Caso atribuamos um valor
   // para RefI (RefI = 8, por exemplo), então o valor
   // da variável I também mudará para este valor.
   ExibeMsg();
   system("read -p 'Pressione qualquer tecla para continuar...' var");
   return 0;
}
//---------------------------------------------------------
void ExibeMsg() // ou void ExibeMsg (void)
{
    cout << "TEXTO no CODIGO FONTE do ARQUIVO 12-00-d.cpp!\n";
}
//---------------------------------------------------------


