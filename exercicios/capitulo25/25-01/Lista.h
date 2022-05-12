#ifndef LISTA_H
#define LISTA_h
// Uma lista de valores inteiros:
typedef int Valor;
class Lista{
    private:
        struct Elemento{
            Valor val;       // Valor do elemento
            Elemento *prox;  // Aponta para o proximo
        };
        Elemento *primeiro; // Aponta para o primeiro
        //Copia profundamente os elementos de uma lista
        // Eh usado no construtor de copia e no operador =
        void copiaProfunda(Lista &lista);
    public:
        // Construtor padrao da lista
        Lista();
        // Destruidor da lista.
        ~Lista():
        // Construtor de copia da lista
        Lista(Lista &lista);
        // Operador de atribuicao da lista
        Lista & operator =(Lista &lista);
        // Insere o valor x na posicao pos da lista
        bool insere(Valor x, int pos);
        // retira o elemento da posicao pos da lista
        bool retira(int pos);
        // Retorna o tamanho da lista
        int tamanho();
        // Indica se a lista esta vazia
        bool vazia();
        // Remove todos os elementos da lista
        void limpa();
        // Obtem o valor x da posicao pos da lista
        bool obtem(Valor &x, int pos);
    };
#endif
