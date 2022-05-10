#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    double xa, ya, xb, yb, xc, yc, cosa, cosb, cosc, a, b, c, p, area, aa, bb, cc, agrau, bgrau, cgrau;
    bool tse;
    // receber as coordenadas cartesianas
    cout << "\nxa = "; cin >> xa;
    cout << "\nya = "; cin >> ya;
    cout << "\nxb = "; cin >> xb;
    cout << "\nyb = "; cin >> yb;
    cout << "\nxc = "; cin >> xc;
    cout << "\nyc = "; cin >> yc;
    // verificar a existencia do triangulo
    a = sqrt(pow(xb-xc,2)+pow(yb-yc,2));
    b = sqrt(pow(xa-xc,2)+pow(ya-yc,2));
    c = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    cout << "\na = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
    tse = (a < b + c) && (b < a + c) && (c < a + b);
    cout << "\ntse = " << tse;
    if ((a < b + c) && (b < a + c) && (c < a + b))
        cout << "\ntriangulo existe";
    else
        cout << "\ntriangulo nao existe";
    // calcular a area do triangulo utilizando a formula de Heron
    cout << "\na = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "\narea = " << area;
    // determinar o maior lado do triangulo
    if (a > b && a > c)
        cout << "\no lado A eh o maior";
    else if (b > c && b > a)
        cout << "\no lado B eh o maior";
    else if (c > a && c > b)
        cout << "\no lado C eh o maior";
    else if (a == b)
        cout << "\nos lados A e B sao iguais";
    else if (a == c)
        cout << "\nos lados A e C sao iguais";
    else // (b == c)
        cout << "\nos lados B e C sao iguais";
    // verificar se o triangulo eh acutangulo, obtusangulo ou retangulo;
    // a² = b² + c² Retangulo
    // a² < b² + c² Acutangulo
    // a² > b² + c² Obtusangulo
    if (pow(a,2) < (pow(b,2) + pow(c,2)))
        cout << "\nAcutangulo";
    else if (pow(a,2) > (pow(b,2) + pow(c,2)))
        cout << "\nObtusangulo";
    else
        cout << "\nRetangulo";
    // verificar se o triangulo eh equilatero, isoceles ou escaleno;
    if (a == b && a == c && b == c)
        cout << "\nEquilatero";
    else if (a == b || a == c || b == c)
        cout << "\nIsoceles";
    else
        cout << "\nEscaleno";
    // colocar em ordem crescente os tres lados do triangulo
    if (a > b && a > c && b > c)
    {
        cout << "\na = " << a;
        cout << ", b = " << b;
        cout << ", c = " << c;
    }
    else if (a > b && a > c && c > b)
    {
        cout << "\na = " << a;
        cout << ", c = " << c;
        cout << ", b = " << b;
    }
    else if (a > b && c > a && c > b)
    {
        cout << "\nc = " << c;
        cout << ", a = " << a;
        cout << ", b = " << b;
    }
    else if (b > a && b > c && a > c)
    {
        cout << "\nb = " << b;
        cout << ", a = " << a;
        cout << ", c = " << c;
    }
    else if (b > a && b > c && c > a)
    {
        cout << "\nb = " << b;
        cout << ", c = " << a;
        cout << ", a = " << c;
    }
    else // (c > b && c > a && b > a)
    {
        cout << "\nc = " << c;
        cout << ", b = " << a;
        cout << ", a = " << b;
    }
    // calcular os 3 angulos internos do triangulo usando a formula de cossenos
    aa = pow(a,2);
    bb = pow(b,2);
    cc = pow(c,2);
    double aaa = (bb+bb-aa)/(2*b*c);
    double bbb = (aa+cc-bb)/(2*a*c);
    double ccc = (aa+bb-cc)/(2*a*b);
    cout << "\nA = " << aaa;
    cout << "\nB = " << bbb;
    cout << "\nC = " << ccc;
    cout << "\narcosseno de A = " << acos(aaa) * 180 / M_PI;
    cout << "\narcosseno de B = " << acos(bbb) * 180 / M_PI;
    cout << "\narcosseno de C = " << acos(ccc) * 180 / M_PI;
    cout << "\n";
    system("read -p 'Aperte Enter para continuar...' var");
}
