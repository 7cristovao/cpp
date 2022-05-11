#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, m; int n;
    int i;
    cout << "n = "; cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "a = "; cin >> a;
        cout << "b = "; cin >> b;
        m = (a + b) / 2.0;
        cout << "Media = " << m << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
