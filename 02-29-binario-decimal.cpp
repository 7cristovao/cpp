#include <iostream>
#include <cmath>
using namespace std;

int conversor(long long n);

int main(int argc, char *argv[])
{
    long long n;

    cout << "Entre um numero binario: ";
    cin >> n;
    cout << " em binario = " << n;
    cout << " \nem decimal = " << conversor(n);
    cout << "\n";
    return 0;
}

int conversor(long long n) {
    int decimal = 0, i = 0, resto;
    while (n!=0)
    {
        resto = n % 10;
        n /= 10;
        decimal += resto * pow(2, i);
        ++i;
    }
    system("read -p 'Press Enter to continue...' var");
    return decimal;
}
