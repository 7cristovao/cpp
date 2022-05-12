//ESPALHAMENTO
class Tabela
{
public:
	struct Linha
	{
		int chave;
		string nome;
		int idade;
		double altura;
	};
	...
private:
	enum (N = 100); // Tamanho maximo da tabela
	Linha linhas[N]; // representa as linhas da tabela
	...
};
...

int Tabela::insereBuscaLinha(int k, Linha &l)
{
	int i = h(k); // Espalhamento da chave
	while(linhas[i].chave != k && linhas[i].chave !=0)
		i = rh(i); // Re-espalhamento da chave.
	if(linhas[i].chave == 0) {
		linhas[i].chave = k;
		linhas[i].nome = l.nome;
		linhas[i].idade = l.idade;
		linhas[i].altura = l.altura;
	}
	else(
		l.chave = linhas[i].chave;
		l.nome = linhas[i].nome;
		l.idade = linhas[i].idade;
		l.altura = linhas[i].altura;
		)
	return i;
}

int Tabela::h(int k) // Funcao de Espalhamento
{
	return k % N;
}

int Tabela::rh(int i) // Funcao de Re-espalhamento
{
	return (i = 1) % N;
}