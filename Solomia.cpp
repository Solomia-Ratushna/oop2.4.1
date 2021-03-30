//Solomia.cpp
#include "Solomia.h"



Solomia::Solomia()
{
	v = new double[1];
	v[0] = 0;
}
Solomia::Solomia(int N = 1)
{

	v = new double[N];

	for (int j = 0; j < N; j++)
		v[j] = 0;
}
double& Solomia::operator[] (int j) { return v[j]; }
