// STRING

// O tipo para cadeia de caracteres, string no ingles,
// eh utilizado para o armazenamento de texto.
// Ele eh uma classe (class) da 
// STL, (Standard Template Library). Seu uso é bem simples

#include <iostream> // printf, scanf, cin, cout, etc.
#include <cmath> // M_PI, M_E, sin, cos, etc.

using namespace std;

int main(int argc, char *argv[])
{
	string s1, s2;
	// String inicializada.
	string s3 = "C++ torna isso mais dificil.";

	// Atribuicao a uma string
	s1 = "C faz com que dar um tiro";
	s2 = "no pe seja facil"; // Atribuicao a uma string
	s1 = s1 + " " + s2; // Concatenacao de strings
	s3 += " mas"; // Outra concatenacao de strings
	cout << s1 << endl; // Exibicao
    // Exibicao
    cout << s3 + " quando nos o fazemos, " << endl;
    cout << "rebenta com a perna toda." << endl; // Exibicao

    string nome; // String nula ou vazia
    cout << "Digite o nome do criador da linguagem C++..."
         << endl; // Mensagem

    getline(cin, nome); // Leitura de cin para a string nome
    string bs = "Bjarne Stroustrup"; // Nome do criador de C++
    if(nome == bs) cout << "Voce acertou!";
    else cout << "Voce errou. O nome eh " << bs;
    cout << endl; // O METODO lenght RETORNA O TAMANHO DE UMA
                  // string: bs.length().
                  // VIDE CLASSES
    // Exibicao dos 6 primeiro caracteres de bs
    for(int i = 0; i < 6; i++)
    	cout << bs[i];  // Uso do operador subscrito
    cout << endl;
    system("read -p 'Aperte Enter para continuar...' var");
	return 0;
}