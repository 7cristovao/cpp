#include <iostream>
#include <cmath>

using namespace std;

void exibir(int n)
{
    for (int i = 0; i < n; i++)
        cout << (pow((1+sqrt(5))/2,i) - pow((1-sqrt(5))/2,i)) / sqrt(5) << endl;
}

int main(int argc, char *argv[])
{
    int n;
    cout << "n = "; cin >> n;
    exibir(n);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
