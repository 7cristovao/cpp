// As enum sao utilizadas p/ identificar os elementos 
//que formam um determinado conjunto de valores inteiros. 
// Elas introduzem um novo tipo. 
// A definicao de uma enumeracao eh feita da seguinte forma:

...
enum Cor {vermelho, verde, azul};
...
Cor c = azul
...

// Neste exemplo a enumeracao COr define um novo tipo. 
// A vriavel c eh do tipo Cor e eh inicializada em azul. 
// Observe que nesta enumeracao o identificador 
// vermelho corresponde ao numero inteiro 0, o verde ao 1 
// e o azul ao 2;

...
enum Peso {MAGRO, MEDIO = 4, GORDO};
...
Peso p = GORDO;
...
// Neste exemplo a enumeracao Peso define um novo tipo
// A variavel 'p' eh do tipo Peso e eh inicializada
// em GORDO. Observe que nesta enumeracao o 
// identificador MAGRO corresponde ao numero inteiro 0,
// o MEDIO ao 4 e o GORDO ao 5

// Diversos ripos nas bibliotecas do C++ sao enumeracoes.
// Como exemplo podemos citar a enumeracao
// TBorderIcon, que eh o tipo da propriedade BorderIcons 
// de um formulario

enum TBorderIcon {biSystemMenu, biMinimize, biMaximize, biHelp};
