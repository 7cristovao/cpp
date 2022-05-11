#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n; double x, s;
    cout << "n = "; cin >> n;
    s = 0.0;
    for (i=1; i<=n; i++)
    {
        cout << "x = "; cin >> x;
        if (x>0.0)
            s = s + x;
    }
    cout << "soma dos positivos = " << s << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
