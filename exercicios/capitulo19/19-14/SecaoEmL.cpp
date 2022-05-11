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