// Ponteiro

// Tipo *nomeDoPonteiro

    char *letra;
    int *qtd;
    double *lista;

/// UTILIZE PONTEIROS COM CAUTELA

    int x;
    int *px;
/// ...
    px = &x;

//--------------------------------------------

// º¹²³º¹²³                 >> &x >> ENDERECO da var x: eh o end do 1º Byte da var na mem do comp
// 01010101 ... 01010101    >>  x >> CONTEUDO da var x: eh o valor da var colocado nos 
//                   Bytes que ela ocupa na memoria do computador

//          pc eh um ponteiro para char 
    char c,                        *pc,         z;
//  ...
    c = 'E';
    pc = &c;  // O endereco da variavel  c eh atribuido ao ponteiro pc 
    z = *pc;  // O valor apontado por pc eh atribuido a z  
//  ...       // Equivale a: z = c;




