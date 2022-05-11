double calculaJDD(double a, double t)
{
	double b = calculaB(a, t); // Chamada
    double x = calculaX(a, t); // Chamada
	return (b * cubo(t) + cubo(b) * t + 3.0 * b * 
		t * quadrado(a - 4.0 * x + 2.0 * t) + 
	    quarta(t) + 6.0 * quadrado(t) *
        quadrado(2.0 * x - t)) / 12.0
}