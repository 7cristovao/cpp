#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int i, n, s, x;
    s = 0;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    for (i = 1; i <= n; i++)
    {
        cout << pow(x,i) << endl;
//        cout << "x^" << i << endl;
    }  
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
