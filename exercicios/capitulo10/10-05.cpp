#include <iostream>

using namespace std;

void exibir(int n)
{
    for (int i = 1; i <= n; i++)
        cout << 3*i-2 << endl;
}

int main(int argc, char *argv[])
{
    int n;
    cout << "n = "; cin >> n;
    exibir(n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
