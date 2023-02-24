// Dados os lados a e b de um retângulo, elaborar um programa para calcular e exibir a área e o perímetro do retângulo

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    double a, b, area, perimetro;
    cout << "Lado a = "; cin >> a;
    cout << "Lado b = "; cin >> b;
    area = a*b;
    perimetro = 2*(a+b);
    cout << "Area = " << area;
    cout << "\nPerimetro = " << perimetro;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
