#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, x;
    cin >> x;
    i = x;
    n = 10;
    for (i=x; i<=n*x; i=i+x)
    {
        cout << i << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
