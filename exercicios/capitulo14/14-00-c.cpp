#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    // ...
    i = 1;
    while(i <= 10){          // 
        if (i == 6) break;   //   Encerra quando i vale 6
        cout << i << endl;   //
        i++;                 //   
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}


