// Arquivo Vetores.h
//--------------------------------------------------------------------------------------
#ifndef VETORES_H
#define VETORES_H
//--------------------------------------------------------------------------------------
    const int MAX = 40;            // - quantidade maxima de componentes 40
    typedef int Vetor [MAX];       // - componentes inteiros
    void sortear(Vetor &v, long int n); // - sortear os n(1 <= n <= 40) componentes 
                                   //   inteiros do vetor de 30 ateh 100
                                   //   (a funcao rand() sorteia um inteiro e a 
                                   //   expressao rand() % k sorteia um inteiro
                                   //   de 0 ateh k-1);
    int media(Vetor &v, int n);     // - calcula a media de todos n primeiros componentes
    int verificaPar(int k);          // - verifica se numero k eh par
    int quantPos(Vetor &v, int n); // - calcular a quantidade de componentes positivos
                                   //   dentre os n primeiros componentes.
//--------------------------------------------------------------------------------------
#endif


