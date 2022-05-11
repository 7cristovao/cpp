#include <iostream>
#include <cstdio> 

using namespace std;

int main(int argc, char *argv[])
{ // do 1 ao 10  // incrementa // cresce
    int n, i, j;  
    cout << "n = ";  
    cin >> n;  
    for (i = 1; i <= n; i++) // loop externo: linhas
    {  
        for (j = 1; j <= i; j++) // loop interno: colunas
        {  
        cout << "*";  
        }  
        cout << "\n"; 
    }  
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}

//*
//**
//***
//****
//*****