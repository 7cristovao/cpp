// arranjo de estruturas
...
struct Aluno{
	string nome;
	int matricula;
	double notaA;
	double notaB;
};
...
Aluno a[10];
...

// estrutura com um arranjo
...
struct Aluno{
	string nome;
	int matricula;
	double nota[4];
};
...
Aluno b;
...

//-----------------------------------------------------
//                                                     |
// a   0    1        8    9                            |
//    a[0] a[1] ... a[8] a[9]                          |
//                                                     |  
// nome        matricula       notaA       notaB;      |
// a[8].nome   a[8].matricula  a[8].notaA  a[8].notaB  |
// ------------ arranjo de estruturas -----------------
//
//
//-----------------------------------------------------|
// b   nome        matricula       nota                |
//     b.nome   b.matricula  b.nota                    |
//                                                     |
// nome        matricula       notaA       notaB;      |
// b.nota[0]   b.nota[1]       b.nota[2]   b.nota[3]   |
// ------------ estrutura com um arranjo ---------------
//
// Observar que a variavel 'a' eh um arranjo de estruturas
// e que para acessar seus elementos usa-se
// a[8].matricula. Jah a variavel 'b' eh uma estrutura
// que contem um arranjo e que para acessar seus elementos 
// usamos por exemplo b.nota[1]

