#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double b=25, b1=10, h=20, h1=5, lambda, B, H, A, C, D, M, beta, teta, delta, ixx;
    
    
    cout << "\nb = " << b; // cin >> b;
    cout << "\nb1 = " << b1; // cin >> b1;
    cout << "\nh = " << h; // cin >> h;
    cout << "\nh1 = " << h1; // cin >> h1;

    A=(h1/h)/(b1/b); 
    H=1-(h1/h); B=1-(b1/b); D=(1/A)-(b1/b); C=A-(h1/h); M=1-(B*H);
    teta=(((A*A)-pow(C,3)*D)/(3*M))-pow(((A-pow(C,2)*D)/(2*M)),2);
    delta=((1-B*pow(H,3))/(3*M))-pow(((1-B*pow(H,2))/(2*M)),2);
    lambda=0.25*(((1-pow((B*H),2))/((1/A)-(B*D)))-((A-(pow(C,2))*D)*(1-(B*pow(H,2)))/(pow(M,2))));
    beta=sqrt(((teta+delta)/2)-sqrt(pow(((teta-delta)/2),2)+pow(lambda,2)));
    ixx=h/beta;

    cout << "\nA = " << A;
    cout << "\nH = " << H;
    cout << "\nB = " << B;
    cout << "\nD = " << D;
    cout << "\nC = " << C;
    cout << "\nM = " << M;
    cout << "\nteta = " << teta;
    cout << "\ndelta = " << delta;
    cout << "\nlambda = " << lambda;
    cout << "\nbeta = " << beta;
    cout << "\nixx = " << ixx;
    
    return 0;
}
