// Arquivo EntradaSaida.h
#ifndef ENTRADASAIDA_H
#define ENTRADASAIDA_H
//----------------------------
#include <string>
#include "../include/nr.h"
// O cabecalho "nr.h" foi colocado na pasta "include", irma desta.
// -----------------------------------------------------------------
void preencheMatriz(Mat_IO_DP &a);
void exibeMatriz(Mat_IO_DP &a, std::string tit);
void exibeVetor(Vec_O_INT &v, string tit);
void exibeEscalar(DP &d, string tit);
// -----------------------------------------------------------------
#endif
