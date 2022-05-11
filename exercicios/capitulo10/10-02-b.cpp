#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double i, n;
    cout << "n = "; cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << 0.2+(0.2*i) << endl;
    }  
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
