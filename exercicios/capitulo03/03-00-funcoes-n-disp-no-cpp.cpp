#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double y, x, a, b, w, z, u, v, n;

    cout << " OS VALORES EM C++ ESTAO EM RADIANOS";

    cout << "\nx = "; cin >> x;
    y = 1/cos(x); // secante de x
    cout << "\nsecante de x = " << y;
    
    cout << "\na = "; cin >> a;
    cout << "\nb = "; cin >> b;
    w = log(a)/log(b); // logaritmo de a na base b
    cout << "\nlogaritmo de a na base b = " << w;

    cout << "\nu (base u^v) = "; cin >> u;
    cout << "\nv (expoente) = "; cin >> v;
    cout << "\nn (raiz enesima) = "; cin >> n;
    z = pow(u,v/n); // raiz n-ésima de u
    cout << " raiz enesima de u = " << z;
    return 0;
}

//      ______
//     /       
//  a /    b      b/a
//   /   x     = x
// \/
/////////////////////////////
//           1
// sec x = -----
//         cos x
/////////////////////////////
//             a
//          log
//     a       c
// log   = --------
//     b       b
//          log
//             c
//
