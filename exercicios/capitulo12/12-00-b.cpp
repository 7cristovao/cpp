#include <iostream> // printf, scanf, etc.
#include <cmath>    // M_PI, M_E, sin, cos, etc.

//---------------------------------------------------------
void ExibeMsg(); // ou void ExibeMsg (void);
//---------------------------------------------------------

using namespace std;
int main(int argc, char *argv[])
{
    ExibeMsg();
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
//---------------------------------------------------------
void ExibeMsg() // ou void ExibeMsg (void)
{
    cout << "OLA UNIVERSITARIOS!\n";
}
//---------------------------------------------------------


