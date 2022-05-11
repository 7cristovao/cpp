#include <iostream>
using namespace std;

void imprime_linha (int tamanho, int borda)
{
    char ch = borda ? '*' : ' ';
    cout << "*";
    while(tamanho-- > 2) {
        cout << ch;
    }
    cout << "*" << endl;
}

int main()
{
    int entrada, i, tamanho;
    do {
        cout<<"Digite o tamanho do quadrado (2 ate 20), zero para terminar: ";
        cin>>entrada;
        cin.ignore();
        if(entrada >=2 && entrada <=20) {
            imprime_linha(entrada, 1);
            for(i=0; i<entrada-2; i++)
                imprime_linha(entrada, 0);
            imprime_linha(entrada, 1);
        } else if(tamanho) {
            cout << "\nTamanho do quadrado invalido! pressione qualquer tecla para tentar novamente...";
        }
    } while(entrada);
    getchar();
    return 0;
}
