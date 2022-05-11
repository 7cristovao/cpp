double calculaJCC(double a, double t)
{
	double b = calculaB(a, t); // Chamada
	return (b * cubo(t) + cubo (b) * t + 3.0 *
		quadrado(a) * b * t + quarta(t)) / 12.0;
}