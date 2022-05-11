#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double H, H1, H2, x, y;
    int n, i;
    for (i=1; i<=n; i++)
    {
        cout << "\nx = "; cin >> x;
        cout << "\ny = "; cin >> y;
        bool H1a, H1b, H1c, H2a, H2b, H2c;
        H1a = (x <= 0);
        H1b = (y <= 0);
        H1c = (y-pow(x,2)+2*x+3 >= 0);
        H2a = (x >= 0);
        H2b = (y <= 0);
        H2c = (y-pow(x,2)-2*x+3 >= 0);
        if ((H1a == true && H1b == true && H1c == true) || (H2a == true && H2b == true && H2c == true))
            cout << "\nPertence ao conjunto H" << endl;
        else
            cout << "\nNao pertence ao conjunto H" << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
