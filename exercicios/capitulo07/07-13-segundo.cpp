#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, x, y;
    x = 4;
    a = 5;
    if (a > 0)
        y = x;
    if (a < 0)
        y = x+1;   
    else
        y = x+2;
    cout << y;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
