#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, d, e, f, g;
    cout << "a ="; a = 1;
    cout << "b ="; b = 1;
    cout << "c ="; c = 1;
    cout << "d ="; d = 1;
    e = 0; f = 0; g = 0; // a=1; b=1; c=1; d=1;
    if (a>b && a>c && a>d) 
        e = a;
    else
        if (b>a && b>c)
            e = b;
        else
            e = c;   //  e=1
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
    if (b<=c)
    { 
        f = f + 2; 
    }
    else
        e = e + 2; 
    if (d>a)
    {
        e = e + 3; 
        f = f + 3; 
    }
        g = g + 3; // g=3
    cout << e << "," << f << "," << g << "\n";
    system("read -p 'Aperte Enter para continuar' var");
    return 0;
}
