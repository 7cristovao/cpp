// PONTEIROS



int x, *p;
//...
p = &x;
*p = 33;
printf("%d", *p); // (1)
printf("%d", x);  // (2)

// (1)(2) O valor exibido serah 33 em ambas as linhas com printf

// º¹²³º¹²³              (3)
// 01010101 ... 01010101 (4)

// (3) &p eh o endereco de p (1º Byte)
// (4) o conteudo de p eh &x

// º¹²³º¹²³                       (5)
// 01010101 01010101 ... 01010101 (6)

// (5) o conteudo de p eh o endereco de x (1º Byte)
// (6) o conteudo apontado por p, *p, eh 33