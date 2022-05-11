#include <iostream>
#include <cmath>

using namespace std;

double pitagoras(double i, double j)
{
    return sqrt(pow(i,2)+pow(j,2));
}

int main(int argc, char *argv[])
{
    int i, j;
    double k;
    for (i = 2; i < 500; i++)
    {
        for (j = 1; j < i; j++)
        {
            k = pitagoras(i,j);
        }
    cout << "i = " << i << ", j = " << j-1 << ", k = " << k << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
