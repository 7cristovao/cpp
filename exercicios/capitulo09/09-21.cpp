#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, j; 
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
    cout<<"\n";
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//*****
// ****
//  ***
//   **
//    *
