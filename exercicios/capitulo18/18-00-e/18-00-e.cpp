#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // Declara vetor do tipo inteiro e inicializa
    // o mesmo com alguns valores
    int vetor[5] = {26, 2, 27, 07, 33};
    int *ponteiro;                              // ponteiro para inteiros
    ponteiro = vetor;                           // Ponteiro aponta para o vetor
    for (int i = 0; i < 5; i++) {
        // Exibe os elementos do vetor
        cout << "O elemento " << i << " vale: "
             << *ponteiro << endl;
        ponteiro++;                             // Incrementa o ponteiro em um endereco
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}