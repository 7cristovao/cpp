#include <iostream>

using namespace std;

double multiploDeDois(int x)
{
    return x % 2;
}

double verificaPar(int y)
{
    if (y == 0)
    {
        cout << "\né par\n" << true;
        return true;
    }
    else
    {
        cout << "\né impar\n" << false;
        return false;
    }
}

int main(int argc, char *argv[])
{
    double x, y, par;
    cout << "\ndigite um valor inteiro: \n"; 
    cin >> x;
    y = multiploDeDois(x);
    par = verificaPar(y);
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
