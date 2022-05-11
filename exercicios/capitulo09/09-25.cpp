#include <iostream>
#include <cmath>

using namespace std;

double grausEmRadianos(double g)
{
    return g*M_PI/180;
}

int main(int argc, char *argv[])
{
    double y, u;
    int i;
    for (i = 0; i < 361 ; i = i + 5)
    {
    u = grausEmRadianos(i); 
    y = sin(u);
    cout << "\nsen " << i << "° = " << y << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
