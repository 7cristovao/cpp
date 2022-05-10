#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    bool A, B, S;                  // define as variaveis booleanas A, B e S
    double Va, Vb, Vf;             // define as variaveis reais     Va, Vb e Vf
    cout << "Volume do tanque A?"; // Saida para o video
    cin >> Va;                     // Entrada da variavel Va
    cout << "Volume do tanque B?"; // Saida para o video
    cin >> Vb;                     // Entrada da variavel Vb
    A = Va > 850;                  // Testa se variavel Va numerica eh verdadeira
    B = Vb > 850;                  // Testa se variavel Vb numerica eh verdadeira
    S = A ^ B;                     // Operacao XOR entre A e B atribuido a S
    Vf = S ? Va + Vb : 0;          // Se S verdadeiro, Va+Vb, se falso zera
    cout << "Volume final = " << Vf << endl;
    system("read -p 'Aperte qualquer tecla para continuar...' var");
    return 0;
}
