#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, d, e, f, g;
    cout << "a ="; cin >> a;
    cout << "b ="; cin >> b;
    cout << "c ="; cin >> c;
    cout << "d ="; cin >> d;
    e = 0; f = 0; g = 0; // a=1; b=2; c=3; d=4;
    if (a>b && a>c && a>d) 
        e = a;
    else
        if (b>a && b>c)
            e = b;
        else
            e = c;   //  e=3
    if (c>d)
    {
        f = c; 
        c = d; 
        d = f;
    }
    if (a>b || c>d)
        g += 1;
    else
        f += 1; // f=1
    if (b<c)
    { 
        e = e + 2; // e=5
        f = f + 2; // f=3
    }
    if (d>a)
    {
        e = e + 3; // e=8
        f = f + 3; // f=6
    }
        g = g + 3; // g=3
    cout << e << "," << f << "," << g << "\n";
    system("read -p 'Aperte Enter para continuar' var");
    return 0;
}
