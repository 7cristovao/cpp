// Vetores, constantes definidas
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    char frase[18] = "isto e uma string";

    // equivale a 

    char frase[18] = {'i', 's', 't', 'o', ' ', 'e',
                      ' ', 'u', 'm', 'a', ' ', 's', 
                      't', 'r', 'i', 'n', 'g', '\0'};

    // 4, 6, 10 eh SP
    // 17 eh NUL

    system("read -p 'Aperte Enter para continuar', var");
    return 0;
}