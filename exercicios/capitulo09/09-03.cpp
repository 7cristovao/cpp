#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double n, i;
    n = 8;
    for (i=2; i<=n; i=i+2)
    {
        cout << i << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
