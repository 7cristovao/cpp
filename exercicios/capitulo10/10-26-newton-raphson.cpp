#include <iostream>

using namespace std;

    double raizQuadrada(double x)
    {
        double y;
        y = x;
        int k, n;
        k = 0.0000000000;
        n = 10.0000000000;
        for(k = 0; k < n; k++){
            y = (1.0000000000/2.0000000000)*(y+(x/y));
           // k = k+1;
        }
        return y;
    }

int main(int argc, char *argv[])
{
    int x;
    cout << "x = "; cin >> x;
    cout << "raiz quadrada = " << raizQuadrada(x) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
