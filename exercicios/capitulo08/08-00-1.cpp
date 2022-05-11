#include <iostream>
#include <cmath>

using namespace std;
// 2     1         3         4
double soma(double a, double b)
    { // 5 
        double s; // 7
        s = a+b;  // 8
        return s; // 9
    } // 6

int main(int argc, char *argv[])
{
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
// 1: a palavra SOMA é o identificador da função

// 2: o tipo DOUBLE que aparece antes do identificador SOMA indica que esta função irá retornar um valor real

// 3 e 4: os parâmetros A e B (do tipo DOUBLE) que aparecem entre parênteses são informações que devem ser passadas para a função durante a sua chamada para que a mesma possa efetuar o cálculo da soma

// 5 e 6: as chaves delimitam o corpo da função

// 7: o comando DOUBLE S declara uma variável local chamada S.
// 7: Variáveis locais só podem ser referenciadas dentro da função onde foram declaradas.
// 7: Funções diferentes podem ter variáveis com o mesmo nome

// 8: o comando S=A+B calcula a soma dos valores contidos nos parâmetros A e B e armazena o resultado na variável S

// 9: o comando RETURN S retorna o valor de S como resultado da função.
// 9: o comando RETURN encerra a execução da função, portanto todos os comandos escritos após o RETURN (se existirem) serão ignorados.
