#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double i, n, s;
    s = 0;
    cout << "n = "; cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << 2+(4*i) << endl;
    }  
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
