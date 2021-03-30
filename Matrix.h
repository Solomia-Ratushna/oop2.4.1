//Matrix.h
#pragma once
#include "Solomia.h"

class Matrix
{
private:
	int N;
	Solomia* K;
public:
	Matrix();
	Matrix(int);
	Matrix(int N, Solomia*);

	int GetN() const;

	Solomia& operator[] (int);
	Matrix& operator = (const Matrix&);//
	friend ostream& operator << (ostream&, const Matrix&);//
	friend istream& operator >> (istream&, Matrix&);//
	operator string() const;//
	friend void operator * (Matrix& a, int x);
	friend void operator + (Matrix&, Matrix&);
	friend bool operator == (Matrix&, Matrix&);

	double MatrixNorm();
	void ComparisonMatrix(Matrix&, Matrix&);
	


	~Matrix();
};


