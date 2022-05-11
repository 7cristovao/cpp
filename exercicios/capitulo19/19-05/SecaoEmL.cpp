double calculaJAA(double a, double t)
{
	double x = calculaX(a, t); // Chamada
	return (t * cubo(a - x) + a * cubo(x) - a *
		cubo (x - t)) / 3.0;
}