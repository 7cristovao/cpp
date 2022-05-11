#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double x, y;
    int i, n;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cin >> x;
        y = sqrt(((x*x)+3)/2);
        cout << y << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
