#ifndef COMPLEXO_H
#define COMPLEXO_H
#include <string>
using namespace std;
class Complexo
{
  private:
    double x, y; // Partes real e imaginaria
    // Metodo que calcula o quadrado deste numero Complexo
    double quadrado() const;
  public:
    // Metodo construtor com valores "default" para seus 
    // parametros
    Complexo(double x = 0.0, double y = 0.0); // Este 
                                              // construtor
                                              // servirah
                                              // tanto para o 
                                              // Construtor
                                              // Padrao
                                              // como para o
                                              // o Construtor
                                              // com dois 
                                              // argumentos 
                                              // tipo double
    // Metodo Construtor de Copia
    Complexo(const Complexo &z); // Este construtor eh o 
                                 // Construtor de Copia
    // Metodo Operador para somar este Complexo com o 
    // Complexo z.
    Complexo operator +(const Complexo &z); 
    // Metodo Operador para subtrair este Complexo do 
    // Complexo z.
    Complexo operator -(const Complexo &z);
    // Metodo Operador para multiplicar este Complexo pelo 
    // Complexo z.
    Complexo operator *(const Complexo &z);
    // Metodo Operador para multiplicar este Complexo pelo 
    // Complexo z.
    Complexo operator /(const Complexo &z);
    // Metodo Operador para dividir este Complexo pelo 
    // Complexo z.
    Complexo & operator =(const Complexo &z); // Este eh o 
                                              // Atribuidor
    // Metodo que retorna a forma retangular deste numero 
    // Complexo.
    string mostra();
};
#endif