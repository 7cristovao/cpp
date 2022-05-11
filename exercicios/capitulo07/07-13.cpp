#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, x, y;
    x = 6;
    x += 1;    
    a = 1;
    b = 2;
    if (a < b)
    {
        y = 10*x;
        a++;        
    }
    if (a>=b)
        y = 1000*x;
    cout << y;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
