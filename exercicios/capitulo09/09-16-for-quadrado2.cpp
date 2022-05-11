#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    int i, j, ni, nj;
    cout << "altura n = "; cin >> ni; 
    cout << "largura n = "; cin >> nj;
    for (i = 1; i <= ni; i++)
    {
        for (j = 1; j <= nj; j++) // ; controla qte de estrelas p/linha
            cout << "*";         //   numericamt qdo linha 13 optada
          cout << endl; 
//        cout << i << endl;     //   ativa o controlador numerico 
    }   
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
