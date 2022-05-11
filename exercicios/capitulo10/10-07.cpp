#include <iostream>

using namespace std;

void exibir(int n)
{
    for (int i = 1; i <= n; i++)
        cout << 0.2*(2*i-1) << endl;
}

int main(int argc, char *argv[])
{
    int n;
    cout << "n = "; cin >> n;
    exibir(n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
