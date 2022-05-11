#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int j, x; long double f;
    cout << "x = "; cin >> x;
    f = 1;
    for (j=1; j<=x; j++)
        f = f * 2 * j;
    cout << "fatorial * 2 = " << f << endl;
    system("read -p 'Press Enter to continue...' var");
    return 0;
}
