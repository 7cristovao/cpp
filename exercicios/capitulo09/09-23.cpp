#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i, j;

    cout << "n = ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
            cout << " ";

        for (j = 1; j <= 2*i-1; j++)
            cout << "*";

        cout << "\n";
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
            cout << " ";
         
        for (j = 1; j <= 2*(n-i)-1; j++)
            cout << "*";

    cout << "\n";
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
