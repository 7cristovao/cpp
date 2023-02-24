// Exemplo para escrever uma mensagem na tela utilizando a linguagem C++ em Linux utilizando boas práticas
// Se existirem métodos nas duas bibliotecas cujo nome seja igual vai dar conflito... 
// ... então é melhor que se use
// foo::metodo() e bar::metodo()

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Linguagem C++\n";
    system("read -p 'Press Enter to continue...' var");
    return 0;
}
