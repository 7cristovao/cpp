#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, d, s, q, x, y, i, j;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    s=a; q=b;
    for (i=a; i<=a+3;i++)
        s=s+3*i-2;
        q=q+987;
    x=c+d; y=0;
    for (j=d;j<=d+1;j++)
    {
        if(i<c)
            x+=1;
        else
            x+=2;
            y+=1;
    }
    cout << "s = " << s << endl;
    cout << "q = " << q << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
