double calculaX(double a, double t)
{
	double b = calculaB(a, t); // Chamada
	return (a * a + b * t) / (2.0 * a + b);
}