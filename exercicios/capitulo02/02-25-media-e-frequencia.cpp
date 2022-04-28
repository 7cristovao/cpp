#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    double p1,p2,t1,t2,p1p,p2p,t1p,t2p,m,ft,fa,f;
    cout << "\nDigite a 1a. nota P1: ";
    cin >> p1;
    cout << "\nDigite o peso da 1a nota: ";
    cin >> p1p;
    cout << "\nDigite a 2a. nota P2: ";
    cin >> p2;
    cout << "\nDigite o peso da 2a. nota: ";
    cin >> p2p;
    cout << "\nDigite a 3a. nota T1: ";
    cin >> t1;
    cout << "Digite o peso da 3a. nota: ";
    cin >> t1p;
    cout << "Digite a 4a. nota T2 :";
    cin >> t2;
    cout << "Digite o peso da 4a. nota";
    cin >> t2p;
    cout << "Digite a quantidade TOTAL de aulas: ";
    cin >> ft;
    cout << "\nDigite a quantidade de aulas que o aluno FREQUENTOU: ";
    cin >> fa;
    m = ((p1*p1p)+(p2*p2p)+(t1*t1p)+(t2*t2p))/(p1p+p2p+t1p+t2p);
    f = fa / ft;
    cout << "\nFrequencia do aluno : " << f;
    cout << "\n\nMedia: " << m << endl;
    system("read -p 'Pressione qualquer tecla para continuar...' var");
    return 0;
}
