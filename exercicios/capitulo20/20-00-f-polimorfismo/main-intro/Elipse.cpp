#include <cmath>
#include "Elipse.h"

double Elipse::calcArea()
{
	return M_PI * getBase() * getAltura() / 4.0;
}