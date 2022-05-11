#include <iostream>

using namespace std;

float raiz(float x);

int main(int argc, char *argv[])
{  
    float x;
   
    cout << "Entre com um numerox positivo por favor : ";
    cin >> x;
   
    cout << "A raiz quadrada de " << x  << " eh " << raiz(x) << "\n";

    return(0);
}


float raiz(float x)
{
    int n;
    float y = x;
   
    for (n = 0; n < 10; ++n)
          y = y/2 + x/(2*y);
           
    return y;    
}
