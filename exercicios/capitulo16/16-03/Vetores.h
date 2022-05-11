// Arquivo Vetores.h
//--------------------------------------------------------------------------------------
#ifndef VETORES_H
#define VETORES_H
//--------------------------------------------------------------------------------------
    const int MAX = 50;                // - quantidade maxima de componentes 50
    typedef double Vetor [MAX];        // - componentes reais
    void calcular(Vetor &v, double n); // - calcular os n(1 <= n <= 50) componentes 
                                       //   reais do vetor atraves da expressao
                                       //   sen (i) / cos (i); 
                                       //   
                                       //   
    int media(Vetor &v, int n);        // - calcula a media de todos n primeiros componentes
    int quantPos(Vetor &v, int n);     // - calcular a quantidade de componentes positivos
                                       //   dentre os n primeiros componentes.
//--------------------------------------------------------------------------------------
#endif


