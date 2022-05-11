// Alocacao DInamica de uma matriz
//...
int m, n; // Numero de linhas e colunas da matriz
double **a; /// Ponteiro para ponteiro para double
cin >> m >> n; 

// Aloca m pont. para inteiros
a = new (double *) [m]; // veja a seta numerada com (1) 

// Aloca n inteiros para cada ponteiro para inteiro
for(int i = 0; i < m; i++)
    a[i] = new double[n]; // veja a seta numerada com (2) 


//  DESALOCAR SE DA NA ORDEM INVERSA EM QUE A MESMA FOI ALOCADA
// ...
// Desaloca n inteiros para cada ponteiro para double
for(int i = 0; i < m; i++)
    delete [] a[i];
// Desaloca m ponteiros para ponteiro para double
delete [] a;