// Os ARRANJOS sao estruturas de dados HOMOGENEAS
// Sao do mesmo tipo
...
double v[20];      // arranjo v formado por 20 componentes do
                   // tipo double

int a[10];         // arranjo a formado por 10 componentes do
                   // tipo int

float x[100][200]; // arranjo x formado por 
                   // 100 * 200 = 20000 componentes do
                   // tipo float

// Jah as estruturas sao heterogeneas
// Os dados podem ser de tipos diferentes. 

... 
struct Pessoa{
	string nome;
	bool sexo;
	int idade;
	double altura;
} y, z;
...

...
struct Aluno{
	string nome;
	string sobrenome;
	int matricula;
	double notaA;
	double notaB;
};
...
Aluno a, b;
...
//  y  campos   nome   sexo       idade      altura
//              y.nome y.sexo     y.idade    y.altura
//
//  z  campos   nome   sexo       idade      altura  
//              z.nome z.sexo     z.idade    z.altura 
//
//  a  campos   nome   sobrenome   matricula   notaA      nota b
//              a.nome a.sobrenome a.matricula a.notaA    a.notaB 
//
//  b  campos   nome   sobrenome   matricula   notaA      nota b
//              b.nome b.sobrenome b.matricula b.notaA    b.notaB 
//
//  ESTRUTURAS SAO HETEROGENEAS E DEFINEM NOVOS TIPOS
//
// As estruturas y e z sao do mesmo tipo (Pessoa),
// porem possuem campos de tipos diferentes:
// o campo 'nome' eh do tipo 'string',
// o campo 'sexo' eh do tipo 'bool',
// o campo 'idade' eh do tipo 'int',
// o campo 'altura' eh do tipo 'double',
//
// Tanto y como z possuem estes quatro campos
//
// As estruturas a e b sao do mesmo tipo (Aluno),
// porem possuem campos de tipos diferentes:
// os campos 'nome' e 'sobrenome' sao do tipo 'string'
// o campo 'matricula' eh do tipo 'int',
// os campos 'notaA' e 'notaB' sao do tipo 'double'.
//
// Tanto a como b possuem estes cinco campos.
//
// Observe que os nomes do campos funcionam como indice para acesso aos valores.
// Tal acesso  se da utilizando o operador ponto (.).
// Vejamos alguns exemplos:
//
...
y.nome = "Jesus";
z.idade = 30;

...
a.nome = "Maria";
b.notaA = 7.0;
...

// Observar qua as estruturas definem novos tipos na linguagem C++
// Veja por exemplo a estrutura do tipo 'Aluno': 
// o identificador 'Aluno' foi utilizado para declarar
// os dois alunos 'a' e 'b'.
// Pode-se junto a declaracao de uma estrutura,
// definir variaveis daquele tipo.
// Isto foi feito com a estrutura 'Pessoa', onde as variaveis 'y' e 'z'
// sao do tipo 'Pessoa'. Ja na declaracao da estrutura 'Aluno', 
// a definicao das variaveis foi feita depois: as variaveis 'a' e 'b', 
// do tipo aluno, foram definidas depois da declaracao do tipo 'Aluno'.
