// PONTEIROS

int x = 24; //  x no endereco de memoria 1000
int y;      //  y no endereco de memoria 1004
int z;      //  z no endereco de memoria 1008
int *px     // px no endereco de memoria 1012

// ...

px = &x;       // Em px fica o endereco 1000
y = *px + 1;   // y recebe o valor 25 como soma do
               // conteudo da memoria 1000 mais 1
z = *(px + 1); // z recebe o valor 25 como o conteudo
//...             da memoria 1004 (1000 + um int) 

// tipo      ->  int                   int                   int                   int *
// variavel  ->  x                     y                     z                     px

// enderecos ->  1000 1001 1002 1003 | 1004 1005 1006 1007 | 1008 1009 1010 1011 | 1012 1013 1014 1015
// conteudo  ->           24                   25                     25                   1000       

//               Estes conteudos sao numeros inteiros                               Este conteudo eh
//                                                                                  um endereco de mem.