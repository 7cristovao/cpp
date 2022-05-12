#include "EntradaSaida.h"
#include <iostream>
#include <iomanip>
using namespace std;
void leVetor(Vetor &x, Tamanho n)
{
	cout << "Vetor com " << n
	     << "componentes inteiros";
	     for(Indice i = 0; i < n; i++){
	     	cout << "Digite #" << i << ": ";
	     	cin >> x[i];
	     }
}
void escreveVetor(Vetor &x, Tamanho n, int tamCampo)
{
	for(Indice i = 0; i < n; i++)
		cout << setw(tamCampo) << x[i];
	cout << endl;
}
void preencheVetor(Vetor &x, Tamanho n)
{
	for(Indice i = 0; i < n; i++) x[i] = n - i;
}