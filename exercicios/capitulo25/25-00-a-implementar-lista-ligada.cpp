// Passos para implementar listas ligadas
//
// 1. declarar o tipo dos valores que serao colocados na lista (Valor);
//
// 2. declarar a classe que representara o tipo da lista (Lista);
//
// 3. declarar internamente a classe que representara a lista (Lista)
//    a estrutura que representara os elementos da lista (Elemento).
//    Esta estrutura contera dois campos (val e prox) que servirao para
//    armazenar um valor da lista e apontar para o proximo elemento, 
//    respectivamente;
// 4. declarar o campo que apontara o primeiro elemento da lista (primeiro);
// 5. declarar os metodos da classe Lista que servirao para a sua manipulacao
//    arquivo.h);
// 6. definir os metodos da classe Lista que servirao para a sua manipulacao
//    (arquivo.cpp);
// 7. fazer reuso da unidade que contem a classe Lista em uma aplicacao
//    Lembre-se dos menus para adicionar e remover outras unidades do projeto 
//    ou dos botoes equivalentes aos menus e tambem da inclusao de cabecalhos 
//    (#include "nome do arquivo.h);
// 8. definir um objeto que seja do tipo Lista na aplicacao para podermos 
//    utilizar as operacoes publicas deste objeto
//
typedef int Valor;
class Lista{
    private:
        struct Elemento{
            Valor val;
            Elemento *prox;
        };
        Elemento *primeiro;
        ...
    public:
     ...
         bool insere(Valor x, int pos);
         bool retira(int pos);
    ...
};
