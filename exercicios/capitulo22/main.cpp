#include <iostream>
#include "Tipos.h"
#include "Alocacao.h"
#include "EntradaSaida.h"
#include "Bubblesort.h"

using namespace std;
int main(int argc, char *argv[])
{
    int tamCampo;
    Vetor x; // Declaracao
	Tamanho n;
	leVetor(x,n);
    escreveVetor(x,n,tamCampo);
    preencheVetor(x,n);
	system("read -p 'Aperte Enter para continuar...' var");
	return 0;
}