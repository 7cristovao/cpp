#include <iostream>
#include <cmath>

using namespace std;

void exibir(int a, int b, int n)
{
    if (a<b)
    {
        for (int i = 0; i < n; i++)
        {
            if (i >= a && i <= b && i % 2 == 0)
                cout << i << endl;
        }
    }
    else
        cout << "a é maior que b";
}
int main(int argc, char *argv[])
{
    int n;
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "n = "; cin >> n;
    exibir(a,b,n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}


//  se  i maior igual a 'a'  E  i maior igual a 'b'   i div p/ 2 c/ resto zero
//  if (       i >= a        &&       i <= b       && i   %    2 == 0)

//  cout << i;
//  imprime i

// i dividido por dois com resto zero significa que ele é par
