#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, q; double x, p;
    cout << "n = "; cin >> n;
    q = 0;
    for (i=1; i<=n; i++)
    {
        cout << "x = "; cin >> x;
        if (x>0)
            q = q + 1;
    }
    if (n == 0)
        p = 0.0;
    else
        p = (double)q/n*100.0;
    cout << "porcentagem de positivos = " << p << "%" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
