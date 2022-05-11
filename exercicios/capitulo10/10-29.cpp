#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "\n\n\t\tCodigo traduzido para C++ do codigo original em C de:";
    cout << "\n\n\t\tStudytonight - Melhor lugar para aprender\n\n\n";
    int n,i;
    float c,big;

    cout << "\n\nDigite a quantidade de numeros que voce deseja inserir: ";
    cin >> n;
    cout << "\n\nDigite " << n << " numeros\n";

    cout << "\n\n\t\t\tElemento 1: ";

    //Passo importante- sempre inicialize BIG para o primeiro elemento
    cin >> big;

    for(i = 2; i <= n; i++)
    {
        cout << "\n\t\t\tElemento "<< i << " : ";
        cin >> c;
        /* 
            se o numero de entrada eh maior que o  
            numero maior corrente
        */
        if(big < c)  
            big = c;    // atualize BIG para o maior valor
    }

    cout << "\n\n\nO maior valor dos " << n << " numeros eh " << big;
    cout << "\n\n\n\n\t\t\tProgramar eh divertido!\n\n\n";
    return 0;
}
