//Indexacao de tabelas
//VETOR DE INDICES E TABELA
class Tabela
{
  public:
  	struct Linha{
  	  int matricula;
  	  string nome;
  	  int idade;
  	  double altura;
  	};
  	...
  private:
  	enum (N = 5);
  	Linha linhas[N]; // Representa as linhas da tabela
  	Linha *indice[N]; // Vetor de indices
};

// metodo para inicializar o vetor de indices
void Tabela::inicVetorIndices()
{
	for(int i = 0; i < N; i++)
		indice[i] = &linhas[i];
}
// metodo para tocar duas linhas
void Tabela::troca(int &x, int &y)
{
	Linha *aux = indice[x];
	indice[x] = indice[y];
	indice[y] = aux;
}
// metodo Bubblesort para a coluna nome
void Tabela::bubblesort()
{
	for(int j = N - 2; j >= 0; j--)
		for(int i = 0; i <= j; i++)
			if(indice[i]->nome > indice[i+1]->nome)
				troca(i, i+1);
}
// metodo para exibir a tabela toda
void Tabela::exibe()
{
	for(int i = 0; i < MAX; i++){
		cout << "Matricula: " << indice[i]->matricula << endl;
		cout << "Nome: " << indice[i]->nome << endl;
		cout << "Idade: " << indice[i]->idade << endl;
		cout << "Altura: " << indice[i]->altura << endl;
	}
}