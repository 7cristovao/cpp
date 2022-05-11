#include <iostream>
#include <cmath>

// declaracao da funcao
// --------------------------------------------------------------------
double distancia(double x1, double y1, double x2, double y2);
// --------------------------------------------------------------------

using namespace std;

int main(int argc, char *argv[])

{
    double x2, x1, y2, y1, d;
    cout << "digite x1: "; cin >> x1;
    cout << "digite x2: "; cin >> x2;
    cout << "digite y1: "; cin >> y1;
    cout << "digite y2: "; cin >> y2;
    cout << "distancia = " << distancia(x1, y1, x2, y2) << endl;
    system("read -p 'Press Enter to continue...' var");
    return 0;
}

// definicao da funcao
// --------------------------------------------------------------------
double distancia(double x1, double y1, double x2, double y2)
{
    double d = sqrt(pow((x2 - x1), 2)) + pow((y2 - y1), 2);
    return d;
}
// --------------------------------------------------------------------
