#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    // ...
    i = 1;
    while(i <= 10){          // while(condicao){
        cout << i << endl;   //   comando 1;
                             //   ...
        i++;                 //   comando n;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}


