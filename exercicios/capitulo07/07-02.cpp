#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]){
    int op;
    double c, f, k;
    cout << "MENU\n----\n";
    cout << "\n1 - Celsius para Farenheit";
    cout << "\n2 - Celsius para Kelvin";
    cout << "\n3 - Farenheit para Celsius";
    cout << "\n4 - Farenheit para Kelvin";
    cout << "\n5 - Kelvin para Celsius";
    cout << "\n6 - Kelvin para Farenheit\n";
    cout << "\nDigite uma opcao: ";
    cin >> op;
    if (op >= 1 && op <= 2)
    {
        cout << "\nDigite o valor da temperatura em Celsius: ";
        cin >> c;
    }
    else if (op >=3 && op <=4)
    {
        cout << "\nDigite o valor da temperatura em Farenheit: ";
        cin >> f;
    }
    else if (op >=5 && op <=6)
    {
        cout << "\nDigite o valor da temperatura em Kelvin: ";
        cin >> k;
    }
    else
        cout << endl;
    switch (op){
        case 1:
            if (c >= 0)
            {
                f = ((9*c)/5)+32;
                cout << "\ntemperatura em Farenheit = " << f;
            }
            else
                cout << "\nx nao pode ser negativo!";
                break;
        case 2:
            k = c + 273;
            cout << "\ntemperatura em Kelvin = " << k;
            break;
        case 3:
            c = ((5*f) -160)/9;
            cout << "\ntemperatura em Celsius = " << c;
            break;
        case 4:
            k = (f + 459.67) / 1.8;
            cout << "\ntemperatura em Kelvin" << k;
            break;
        case 5:
            c = k - 273;
            cout << "\ntemperatura em Celsius" << c;
            break;
        case 6:
            f = 1.8*k - 459.67;
            cout << "\ntemperatura em Farenheit" << f;
            break;
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
    }
}
