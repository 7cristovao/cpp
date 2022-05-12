#include <ctime> // time_t, time, difftime, srand, etc.

using namespace std;

int main(int argc, char const *argv[])
{
	Vetor a;
	int tam = 2000;
	alocaVetor(a, tam);
	time_t tAntes, tDepois;
	double somaBubble = 0.0;
	int n = 100;
	for(nt k = 0; k < n; k++){
		sorteiaVetor(a, tam);
		tAntes = time(0);
		bubblesort(a, tam);
		tDepois = time(0);
		somaBubble += difftime(tDepois, tAntes);
	}
	double med = somaBubble / n * 1000.0;
	cout << "Media Bubblesort: " << med << " ms" MM endl;
	desalocaVetor(a);

	system("read -p 'Aperte Enter para continuar...' var");
	return 0;
}