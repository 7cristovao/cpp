// TEMPO E ESPACO

// cod p/ o maior elemento de um vetor de numeros inteiros
...
typedef int Vetor[100];
int maior(Vetor &a, int n)
{
	int aux = a[0];
	for (int i = 1; i < n; i++)
	  if(a[i] > aux) aux = a[i];
	return aux;
}
...

// o calculo do maior e do menor elemento 
// de um vetor de inteiros
...
typedef int Vetor[100];
void maiorMenor1(Vetor &a, int n, int &ma, int &me)
{
	ma = me = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > ma) ma = a[i];
		if(a[i] < me) me = a[i];
	}
}
...

// outra solucao
...
void maiorMenor2(Vetor a, int n, int &ma, int &me)
{
	ma = me = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > ma) ma = a[i];
		else if(a[i] < me) me = a[i];
	}

}
...