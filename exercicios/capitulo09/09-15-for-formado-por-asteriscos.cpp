#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    int i, j, n;
    cout << "n = "; cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++) // ; controla qte de estrelas p/linha
            cout << "*";         //   numericamt qdo linha 13 optada
          cout << endl; 
//        cout << i << endl;     //   ativa o controlador numerico 
    }   
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
