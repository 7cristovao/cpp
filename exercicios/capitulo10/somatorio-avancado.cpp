#include <iostream>

using namespace std;

int soma(int n)
{
    int s = 0;
    int i = 0;
    cout << "\ni = "; cin >> i;
    for (i=i; i<=n; i = i + 1)
        s = i + s;
    //  s = s + 2*i  // exemplo do livro
    //  s = s + 
    return s;
}

int main(int argc, char *argv[])
{
    int n, s, i;
    cout << "n = "; cin >> n;
//    cout << "\ni = "; cin >> i;
    s = 0;
    s = soma(n);
    cout << "Soma = " << s << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
