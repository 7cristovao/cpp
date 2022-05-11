// Arquivo Vetores.h
//--------------------------------------------------------------------------------------
#ifndef VETORES_H
#define VETORES_H
//--------------------------------------------------------------------------------------
    const int MAX = 30;            // - quantidade maxima de componentes 30
    typedef int Vetor [MAX];       // - componentes inteiros
    void sortear(Vetor &v, int n); // - sortear os n(1 <= n <= 30) componentes 
                                   //   inteiros do vetor de -20 ateh +30
                                   //   (a funcao rand() sorteia um inteiro e a 
                                   //   expressao rand() % k sorteia um inteiro
                                   //   de 0 ateh k-1);
    int soma(Vetor &v, int n);     // - calcula a soma de todos n primeiros componentes
    int quantPos(Vetor &v, int n); // - calcular a quantidade de componentes positivos
                                   //   dentre os n primeiros componentes.
//--------------------------------------------------------------------------------------
#endif


