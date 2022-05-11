...
double a = 12.5;
double t = 7.3;
double JAA, JBB, JCC, JDD;
CalculaMomentos(a, t, JAA, JBB, JCC, JDD);
cout << "Momentos de inercia: " << endl;
cout << JAA << "cm⁴" << endl;
cout << JBB << "cm⁴" << endl;
cout << JCC << "cm⁴" << endl;
cout << JDD << "cm⁴" << endl;
...
void CalculaMomentos(double a, double t,
	double &JAA, double &JBB, double &JCC, double &JDD)
{
	double b = calculaB(a, t); // Chamada
	double x = calculaX(a, t); // Chamada
	JBB = JAA = (t * cubo(a - x) + a * cubo(x) -
		a * cubo(x - t)) / 3.0;
	JCC = (b * cubo(t) + cubo(b) * t + 3.0 *
		quadrado(a) * b * t + quarta(t)) / 12.0;
	JDD = (b * cubo(t) + cubo(b) * t + 3.0 * b *
	    t * quadrado(a - 4.0 * x + 2.0 * t) + 
		quarta(t) + 6.0 * quadrado (t) *
		quadrado(2.0 * x - t)) / 12.0;
}

void CalculaMomentos(double a, double t, VetorMomentos J)
{
	double b = calculaB(a, t); // Chamada
	double x = calculaX(a, t); // Chamada
	J[1] = J[0] = (t * cubo(a - x) + a * cubo(x) - a * cubo(x - t)) / 3.0;
	J[2] = (b * cubo(t) + cubo(b) * t + 3.0 *
		quadrado(a) * b * t + quarta(t)) / 12.0;
	J[3] = (b * cubo(t) + cubo (b) * t + 3.0 * b *
		t * quadrado(a - 4.0 * x + 2.0 * t) +
		quarta(t) + 6.0 * quadrado(t) *
		quadrado(2.0 * x - t)) / 12.0;
}