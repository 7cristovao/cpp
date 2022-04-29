#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double M, Q, N, q, gama, fi, alfa, beta, h, y, R, lambda_H, delta, lambda_V;
    cout << "q = "; cin >> q;
    cout << "gama = "; cin >> gama;
    cout << "fi = "; cin >> fi; 
    cout << "alfa = "; cin >> alfa;
    cout << "beta = "; cin >> beta;
    cout << "h = "; cin >> h;

    lambda_H=pow((sin(alfa+fi))/(sin(alfa)*(1+sqrt((sin(fi+delta)*sin(fi-beta))/(sin(alfa-delta)*sin(alfa+beta))))),2);

    y = h*(2*gama*h+3*q)/(3*gama*h+6*q);

    R = gama*(pow(h,2)/2)+q*h;

    Q = R*(lambda_V*sin(alfa)+lambda_H*cos(alfa));

    M = R*lambda_H*(h-y);

    delta = (2/3)*fi;

    N = R*lambda_V*cos(alfa)-lambda_H*sin(alfa);

    lambda_V=lambda_H*pow(tan(alfa-delta),-1);

    cout << "\nM = " << M;
    cout << "\nQ = " << Q;
    cout << "n\N = " << N;

    return 0;
}
