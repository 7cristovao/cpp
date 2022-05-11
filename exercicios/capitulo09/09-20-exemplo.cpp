#include<iostream>
using namespace std;
int main()
{
        int i, j, k, num=1, decr=8, count=0, temp, rows;
        cout<<"\n Enter Number of Rows : ";
        cin>>rows;
        for(i=0; i<rows; i++)
        {
                for(k=0; k<decr; k++) // Este loop imprime os espacos
                {
                        cout<<" ";
                }
                for(j=0; j<i; j++)  // Este loop da ao valor solicitado a variavel num
                {
                        count++;
                }
                num = count;
                temp = num;
                for(j=0; j<i; j++)  // Este loop imprime os numeros
                {
                        cout<<num--<<" ";
                }
                cout<<"\n";
                num = temp;
                decr=decr-2;
        }
        system("read -p 'Aperte Enter para Continuar' var");
        return 0;
}
