#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int op;
    double x, y;
    cout << "MENU\n----\n\n";
    cout << "1 - raiz quadrada\n2 - exponencial\n3 - modulo\n\n";
    cout << "Escolha uma opcao: "; cin >> op;
    if (op >= 1 && op <= 3)
    {
    cout << "\nDigite o valor de x: ";
    cin >> x;
    }
    cout << endl;
    switch (op){
        case 1:
            if (x>=0)
            {
                y = sqrt(x);
                cout << "y = " << y;
            }
            else
                cout << "x nao pode ser negativo:";
            break;
        case 2:
            y = exp(x);
            cout << "y = " << y;
            break;
        case 3:
            y = fabs(x);
            cout << "y = " << y;
            break;
        default:
            cout << "Opcao invalida!";
    }
    cout << endl << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

