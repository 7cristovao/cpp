void bubblesort(Vetor &a, Tamanho n, 
	int &gAtrib, int &qArit, int &qBool, int &qTroca)
{
	qAtrib = 1; // j = n - 1
	qArit = 1; // j = n - 1
	qBool = 1; // j >= 0
	qTroca = 0;
    for (Indice j = n - 1; j >= 0; j--){
	    qAtrib++; // i = 0
	    qBool++; // i < n
	    for(Indice i = 0; i < j; i++){
		    qBool++; // a[i+1] < a[i]
		    qArit += 3; //  a[i+1] < a[i]
		    if(a[i+1] < a[i]){
			    troca(a[i+1], a[i]);
			    qTroca++; // troca(a[i+1], a[i])
			    qArit += 3; // troca(a[i+1], a[i])
		    }
		qArit++; // i++
		qBool++; // i < n
	    }
	qArit++; // j--
	qBool++;   // j >=
    }
}