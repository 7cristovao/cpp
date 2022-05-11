#include <iostream>

void exibe();

using namespace std;

int main(int argc, char *argv[])
{
    exibe();
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

void exibe()
{
    int i;
    // ...
    i = 0;
    do{          
      i++;
      if (i%2==1) continue; // Nao exibe os impares
      cout << i << endl;
    }while (i <= 100);       
}
