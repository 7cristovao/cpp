void LeAbaA(double &a)
{
	do{
		cout << "Valor da aba externa (cm): ";
		cin >> a;
	} while(a <= 0.0); // Aba externa positiva e nao nula
}