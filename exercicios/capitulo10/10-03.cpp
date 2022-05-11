#include <iostream>

using namespace std;

void exibir(int n) // void eh usado para funcao(oes) sem retorno
{
    for (int i=1; i<=n; i++)
        cout << 2*i << endl;
}
int main(int argc, char *argv[])
{
    int n;
    cout << "n = "; cin >> n;
    exibir(n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
