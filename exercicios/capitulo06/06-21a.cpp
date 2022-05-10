#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    double f, p1, p2, t1, t2, m, p3, mf;
    cout << "\nfrequencia = "; cin >> f;
    if (f < 0.75)
        cout << "\nreprovado por frequencia" << endl;
    else
    { 
        cout << "\nobter notas: \np1 = "; cin >> p1;
        cout << "\np2 = "; cin >> p2;
        cout << "\nt1 = "; cin >> t1;
        cout << "\nt2 = "; cin >> t2;
        m = (3*p1+5*p2+t1+t2) / 10;
        if (m >= 5)
            cout << "\naprovado nota: " << m << "  frequencia: " << f << endl;
        else if (m >= 3)
        {
            cout << "\nobter nota: \np3 = "; cin >> p3;
            mf = (m + p3)/2;
        }
        else 
            if (m >= 5)
                cout << "\naprov nota: " << mf << "  frequencia: " << f << endl;
            else 
                cout << "\nreprovado por notas" << endl;
        else
            cout << "\nreprovado por notas" << endl;
    }
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
