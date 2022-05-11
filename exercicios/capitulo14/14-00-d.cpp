#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    // ...
    i = 0;
    do{          
      i++;
      if (i%2==1) continue; // Nao exibe os impares
      cout << i << endl;
    }while (i <= 10);       

    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}


