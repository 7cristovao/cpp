#ifndef SECAOEML_H
#define SECAOEML_H

struct Momentos{
	double JAA, JBB, JCC, JDD;
};
Momentos CalculaMomentos(double a, double t);

#endif