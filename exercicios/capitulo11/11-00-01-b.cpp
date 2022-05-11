#include <iostream>
using namespace std;
    
long double fat(int x)
{
        int j; long double f;
        f = 1;
        for (j=1; j<=x; j++)
            f = f * j;
        return f;
}
int main(int argc, char *argv[])
{
        int x; long double f;
        cout << "x = "; cin >> x;
        f = fat(x);
        cout << "fatorial = " << f << endl;
        system("read -p 'Press Enter to continue...' var");
        return 0;
}
