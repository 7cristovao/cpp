#include "Figura.h"
                                //  A operacao setCor esta
void Figura::setCor(string cor) //--declarada no arq Figura.h
{                               //  dentro da classe Figura
	this->cor = cor;            //  em sua secao public
}                               
string Figura::getCor()  //--A operacao getCor esta declarada      
{                        //  dentro da classe Figura no
	return cor;          //  arquivo Figura.h
}

// lembretes:

// usamos o OPERADOR PONTO (.) quando temos à esqueda um
// objeto como, por exemplo, 'animal1.setNome("Leao Leo")',
// onde animal1 eh um objeto do tipo Animal;
//
// usamos o OPERADOR DOIS PONTOS DOIS PONTOS (::) quando
// se tem à esquerda uma classe como, por exemplo,
// Figura::setCor(stringCor), onde 'Figura' eh uma classe
//
// usa-se o OPERADOR SETA (->) quando se tem à esquerda
// um ponteiro como, por exemplo, pR->setBase(4.0), 
// onde pR eh um ponteiro para um objeto da classe Retangulo

// O uso do ponteiro 'this(ponteiro para este objeto)'
// eh necessario para nao haver confusao entre o atributo 'cor'
// e o parametro 'cor' do metodo 'setCor', pois ambos
// tem o mesmo identificador 'cor'.