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
    double a;
    a = 2.5082364789;
    do{
        cout << a << endl;
        a += 2.5082364789; // a = a + 2.5082364789
    } while(a < 31.34598736);
}

