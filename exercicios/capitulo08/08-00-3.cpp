#include <iostream>
#include <cmath>

using namespace std;

double soma(double a, double b)
{ 
    return a+b;
}

int main(int argc, char *argv[])
{
    double x, y, s;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    s = soma(x,y); // 1, 2, 3
    cout << "soma = " << s << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
// 1: transfere o valor da variavel X para o parametro A e o valor da variavel Y para o parametro B
// 2: executa os comandos especificados no corpo da funcao
// 3: atribui o valor de retorno da funcao para a variavel S
