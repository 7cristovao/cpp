#include <iostream>
#include <cmath>

double ln(double x);

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    cout << "digite x: "; cin >> x;
    cout << ln(x) << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

double ln(double x)
{
    if(x <=0) return NAN;
    double pot = (x - 1) / (x + 1);
    double q = pot * pot;
    double p = pot;
    double s = 0.0;
    int k = 3;
    while(fabs(p) > 1E-8){
      s += p;
      pot *= q;
      p = pot / k;
      k += 2;
    }
    return 2.0 * s;
}
