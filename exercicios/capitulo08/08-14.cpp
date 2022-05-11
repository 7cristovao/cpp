#include <iostream>
#include <cmath>

using namespace std;
// distancia do lado A
double da(double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
// distancia do lado B
double db(double x2, double x3, double y2, double y3)
{
    return sqrt(pow(x3-x2,2)+pow(y3-y2,2));
}
// distancia do lado C
double dc(double x1, double x3, double y1, double y3)
{
    return sqrt(pow(x1-x3,2)+pow(y1-y3,2));
}
// calcular a area do triangulo
double at(double sp, double a, double b, double c)
{
    return sqrt(sp*(sp-a)*(sp-b)*(sp-c));
}
// calcular o semi-perimetro
double spe(double a, double b, double c)
{
    return (a+b+c)/2;
}
int main(int argc, char *argv[])
{
    double x1, x2, y1, y2, x3, y3, a, b, c, sp, area;
    cout << "\ninsira os valores: \n";
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    a = da(x1,x2,y1,y2);
    b = db(x2,x3,y2,y3);
    c = dc(x1,x3,y1,y3);
    sp = spe(a,b,c);
    area = at(sp,a,b,c);
    cout << "\na = " << a; 
    cout << "\nb = " << b;
    cout << "\nc = " << c;
    cout << "\nsp = " << sp;
    cout << "\narea = " << area;
    cout << "\n" << endl;
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
