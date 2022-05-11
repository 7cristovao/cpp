#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, n,sp, i;
    cin >> n;
    for (i=1; i<=n; i++)
    {
    cin >> a >> b >> c; 
    sp = (a+b+c)/2;
    cout << sp << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
