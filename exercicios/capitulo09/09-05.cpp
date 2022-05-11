#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double n, i;
    n = 11;
    for (i=2; i<=n; i=i+3)
    {
        cout << i << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
