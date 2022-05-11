#include <iostream>

using namespace std;

int soma(int n)
{
    int s = 0;
    for (int i=1; i<=n; i++)
        s = 2*i-1 + s;
    return s;
}

int main(int argc, char *argv[])
{
    int n, s;
    cout << "n = "; cin >> n;
    s = soma(n);
    cout << "Soma = " << s << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
