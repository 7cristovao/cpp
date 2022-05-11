#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    // ...
    i = 1;
    do{          
        cout << i << endl;   //   comando 1;
                             //   ...
        i++;                 //   comando n;
    }while (i <= 10);        //   while(condicao)

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}


