#include <iostream>

using namespace std;

int predecessor(int z)
{
    return z - 1;
}

int main(int argc, char *argv[])
{
    double z;
    cin >> z;
    cout << predecessor(z) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
