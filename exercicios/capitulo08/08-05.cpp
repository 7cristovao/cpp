#include <iostream>

using namespace std;

double MediaDeTresNumeros(double a, double b, double c)
{
    return (a+b+c)/3;
}

int main(int argc, char *argv[])
{
    double a, b, c, m;
    cout << "Digite a primeira nota\n";
    cin >> a;
    cout << "Digite a segunda nota\n";
    cin >> b;
    cout << "Digite a terceira nota\n";
    cin >> c;
    m = MediaDeTresNumeros(a, b, c);
    cout << "Media: " << m << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
