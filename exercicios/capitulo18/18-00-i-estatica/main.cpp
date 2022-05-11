#include <iostream> // para cin, cout, etc
#include "VetMat.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Vetor em tempo de compilacao (alocacao estatica):
    TVetor u; // Declaracao
    LeVetor(u); // Chamada de LeVetor
    EscreveVetor(u); // Chamada de EscreveVetor

    // Vetor em tempo de execucao (alocacao dinamica):
    cout << "Dimensao do vetor?...";
    int n;
    cin >> n;
    TVet v; // Declaracao
    Aloca(v, n); // Chamada de Aloca
    LeVetor(v, n); // Chamada de LeVetor
    EscreveVetor(v, n); // Chamada de EscreveVetor
    Desaloca(v); // Chamada de Desaloca

    // Matriz em tempo de compilacao (alocacao estatica)
    TMatriz a; // Declaracao
    LeMatriz(a); // Chamada de LeMatriz
    EscreveMatriz(a); // Chamada de EscreveMatriz
    // Matriz em tempo de execucao (alocacao dinamica):
    cout << "Ordem da matriz...";
    int m;
    cin >> m;
    TMat b; // Declaracao
    Aloca(b, m, m); // Chamada de Aloca
    LeMatriz(b, m, m); // Chamada de LeMatriz
    EscreveMatriz(b, m, m); // Chamada de EscreveMatriz
    Desaloca(b, m); // Chamada de Desaloca

    // Soma dos vetores estaticos u1 e u2:
    TVetor u1, u2, resposta;
    LeVetor(u1); // Chamada de LeVetor
    LeVetor(u2); // Chamada de LeVetor
    SomaVet(u1, u2, resposta);
    EscreveVetor(resposta);

    // Produto escalar dos vetores dinamicos v1 e v2
    cout << "Dimensao dos vetores:...?";
    int d;
    cin >> d;
    TVet v1, v2; // Declaracao
    Aloca(v1, d); // Chamada de Aloca para o vetor v1
    LeVetor(v1, d); // Chamada de LeVetor para o vetor v1
    Aloca(v2, d); // Chamada de Aloca para o vetor v2
    LeVetor(v2, d); // Chamada de LeVetor para o vetor v2
    cout << "Produto escalar: " << ProdEsc(v1, v2, d) << endl;
    Desaloca(v1); // Chamada de Desaloca para o vetor v1
    Desaloca(v2); // Chamada de Desaloca para o vetor v2
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}