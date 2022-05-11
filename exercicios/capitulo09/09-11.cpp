#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double d, x2, x1, y2, y1, n, i;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cout << "d = sqrt((x2-x1)²+(y2-y1)²)";
        cout << "\n\nx1 = ";
        cin >> x1;
        cout << "\nx2 = ";
        cin >> x2;
        cout << "\ny1 = ";
        cin >> y1;
        cout << "\ny2 = ";
        cin >> y2;
        d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        cout << "\n\n" << d;
        cout << "\n";
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
