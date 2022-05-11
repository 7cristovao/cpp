#include <iostream>

using namespace std;
// n: tamanho
int main(int argc, char *argv[])
{
    int n, i, j;
    n=0;
    cout << "n: "; cin >> n;
// i: rows(linhas) // j: cols(colunas)
    for(i=0; i!=n; i++)
    {
        for(j=0; j!=n; j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
