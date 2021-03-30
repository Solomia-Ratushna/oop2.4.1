//Solomia.h
#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std; 
class Solomia

{
public:
	double* v;

	Solomia();
	Solomia(int);
	double& operator [] (int);
};
