#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{ // do 10 ao 1 // decrementa // decresce
    int i, j, n;
    cout << "n = "; cin >> n;
    for (i=n; i>=0; i--) // loop externo com operador decrescente
    {
        for (j=1; j<=i; j++) // loop interno com operador crescente
        {
            cout << "*"; // estrela
        } 
        cout << "\n";    // nova linha
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
//*****
//****
//***
//**
//*
