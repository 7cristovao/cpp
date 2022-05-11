#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double a, b, c, n,sp, i, x1, x2, x3, y1,y2,y3, area;
    cin >> n;    
    for (i=1; i<=n; i++)
    {
        cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3; 
        a = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
        b = sqrt(pow(x3-x2,2.0)+pow(y3-y2,2.0));
        c = sqrt(pow(x1-x3,2.0)+pow(y1-y3,2.0));
        sp = (a+b+c)/2;
        area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
        cout << a << "\n" << b << "\n" << c << "\n";
        cout << sp << "\n";
        cout << area << endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
