#include <iostream>

using namespace std;

int sucessor(int z)
{
    return z + 1;
}

int main(int argc, char *argv[])
{
    double z;
    cin >> z;
    cout << sucessor(z) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
