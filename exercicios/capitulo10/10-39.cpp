#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, q; double x;
    cout << "n = "; cin >> n;
    q = 0;
    for (i = 1; i <= n; i++)
    {
        cout << "x = "; cin >> x;
        if (x>0)
            q = q + 1;
    }
    cout << "quantidade de positivos = " << q << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
