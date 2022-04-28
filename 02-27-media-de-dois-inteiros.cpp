#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int v1, v2;
    double m;
    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;
    m = (v1+v2)/2;
    cout << "Media = " << m;
    system("read -p 'Aperte qualquer tecla para continuar...' var");
    return 0;
}
