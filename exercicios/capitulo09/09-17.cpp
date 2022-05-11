#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, n;
    n = 0;
    cin >> n;
    for (i=0; i<=n-1; i++) // i: linhas
    {
        for (j=0; j<=n-1; j++) // j: colunas
        {
        if(i==0 || i==n-1 || j==0 || j==n-1)
            cout << "* ";
        else
            cout << "  ";
        }
    cout << endl;
    } 
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
