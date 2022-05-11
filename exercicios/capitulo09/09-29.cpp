#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    for (i = 1 ; i <= 10; i = i++)
        cout << i;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
