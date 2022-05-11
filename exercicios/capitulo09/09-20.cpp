#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, k, n;
    cout << "n = "; cin >> n;
    for (i=1; i<=n; i++)
    {
        for (j=n; j>=i; j--)
        {
            cout << " ";
        }
        for (k=1; k<=i; k++)
        {
                cout << "*";
        }
        cout << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//    *
//   **
//  ***
// ****
//*****