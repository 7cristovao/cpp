// Aproximacao do numero PI atraves das series de Viete
// Language: C
// Autor: Jose Cintra (jose.cintra@html-apps.info)

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
   double n, i, j;     // Numero de iteracoes e variaveis de controle
   double f;           // fator que repete
   double pi = 1;
      
   cout << "Aproximacao do numero PI atraves das series de Viete\n";
   cout << "\nEntre o numero de iteracoes: "; cin >> n;
   cout << "\nEspere. Está rodando...\n";   
    
   for(i = n; i > 1; i--) {
      f = 2;
      for(j = 1; j < i; j++){
         f = 2 + sqrt(f);
      }
      f = sqrt(f);
      pi = pi * f / 2;
   }
   pi *= sqrt(2) / 2;
   pi = 2 / pi;
   
   cout << "\nValor de PI aproximado = " << pi << endl;  
   
   system("read -p 'Aperte Enter para continuar...' var");
   return 0;
}
