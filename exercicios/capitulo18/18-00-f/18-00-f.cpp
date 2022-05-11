// VARIAVEIS NAS REGIOES DE MEMORIA

float *x = new float; // operador 'new' aloca variaveis e obj na memoria dinamica

delete x; // operador 'delete' desaloca variaveis e obj da memoria dinamica

float *p = new float[3]; // operador 'new' pode alocar diversas variaveis na memoria dinamica
                         // ou melhor um arranjo de variaveis

// neste exemplo o operador new aloca memoria para 
// tres var do  tipo
float (new float[3]) 
// e retorna o endereco de memoria onde foram atribuido = ao ponteiro 'p'.

// O ponteiro 'p' agora contem o endereco
// de onde se inicia a alocacao dos tres valores do tipo 'float';

// o operador delete pode desalocar diversas variaveis na memoria dinamica ou melhor um arranjo de variaveis

delete [] p;

// observar que o op delete desaloca da memoria dinamica os tres valores do tipo 
// float apontados pelo ponteiro p. 

// Observar tambem que os colchetes devem estar em vazios. Nao eh o ponteiro p 
// que eh desalocado, mas sim os tres valores que ele aponta
