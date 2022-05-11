#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, s;
    s = 0;
    cout << "n = "; cin >> n;
    for (i = 1; i <= n; i++)
        cout << 3*i-1 << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
