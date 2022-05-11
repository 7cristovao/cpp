#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n, i;    
    double x1, y1;
    cout << "n = "; cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            cout << "i = " << i;
            cout << "\nx" << i << " = "; cin >> x1;
            cout << "\ny" << i << " = "; cin >> y1; cout << endl;
        }
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
