#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    double a,b,m;
    cout << "Digite a primeira nota\n";
    cin >> a;
    cout << "Digite a segunda nota\n";
    cin >> b;
    m = (a+b)/2.0;
    cout << "Media: " << m << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
