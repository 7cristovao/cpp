int main(int argc, char *argv[])
{
	Vetor a;
	int tam = 10;
	alocaVetor(a, tam);
	preencheVetor(a, tam);
	escreveVetor(a, tam, 5);
	int qAtrib, qArit, qBool, qTroca;
	bubblesort(a, tam, qAtrib, qArit, qBool, qTroca);
	mostraQuantidades(qAtrib, qArit, qBool, qTroca);
	escreveVetor(a, tam, 5);
	desalocaVetor(a);
	system("read -p 'Aperte Enter para continuar...'  var");
	return 0;
}