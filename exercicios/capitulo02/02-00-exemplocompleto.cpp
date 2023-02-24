// Este exemplo exibe a palavra linguagem C++ na primeira linha do vídeo. O caractere de controle \n move o cursor para segunda linha do vídeo

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout << "Linguagem C++\n";
    system("read -p 'Press Enter to continue...' var");
    return 0;
}
