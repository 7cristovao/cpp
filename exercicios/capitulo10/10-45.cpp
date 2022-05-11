#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, q; double x, m, s;
    cout << "n = "; cin >> n;
    s = 0; q = 0;
    for (i=1; i <=n; i++)
    {
        cout << "x = "; cin >> x;
        if (x>0)
        {
            q = q + 1;
            s = s + x;
        }
    }
    if (q == 0)
        m = 0.0;
    else
        m = s/q;
    cout << "media dos positivos = " << m << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
