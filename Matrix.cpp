
//Matrix.cpp
#include <Windows.h> 
#include "Matrix.h"

Matrix::Matrix()
{
	N = 1;

	K = new Solomia[N];
	K[0] = Solomia(N);
}

Matrix::Matrix(int N = 1)
{

	this->N = N < 3 ? 4 : N;

	K = new Solomia[this->N];
	for (int i = 0; i < this->N; i++) { K[i] = Solomia(this->N); }
}

Matrix::Matrix(int N, Solomia* A)
{
	this->N = N;
	K = A;
}

int Matrix::GetN() const { return N; }

Solomia& Matrix::operator[] (int i) { return K[i]; }
Matrix& Matrix::operator = (const Matrix& A)
{
	N = A.N;

	K = A.K;
	return *this;
}

Matrix::operator string() const
{
	stringstream ss;
	for (int i = 0; i < this->GetN(); i++)
	{
		for (int j = 0; j < this->GetN(); j++)
		{
			ss << K[i].v[j] << "  ";
		}
		ss << endl;
	}
	return ss.str();
}

ostream& operator << (ostream& out, const Matrix& A)
{
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Matrix& A)

{
	for (int i = 0; i < A.GetN(); i++)
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		cout << "Введіть рядок " << A.GetN() << " елементів " << endl;
		for (int j = 0; j < A.GetN(); j++)
		{
			in >> A.K[i].v[j];
		}

	}
	return in;
}

void operator + (Matrix& A, Matrix& B)
{
	Matrix Result(A.GetN());

	for (int i = 0; i < A.GetN(); i++)
		for (int j = 0; j < B.GetN(); j++)
			Result[i][j] = A[i][j] - B[i][j];
	cout << Result;
}

bool operator == (Matrix& A, Matrix& B)
{
	int Counter = 0;

	for (int i = 0; i < A.GetN(); i++)
		for (int j = 0; j < A.GetN(); j++)
			if (A[i][j] == B[i][j])
				Counter++;
	return Counter == A.GetN() * A.GetN() ? true : false;
}

double Matrix::MatrixNorm()
{
	double SumToSquare = 0;

	for (int i = 0; i < this->GetN(); i++)
		for (int j = 0; j < this->GetN(); j++)
			SumToSquare += this->K[i][j] * this->K[i][j];

	return sqrt(SumToSquare);
}

void Matrix::ComparisonMatrix(Matrix& A, Matrix& B)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	if (A == B) cout << "Матриці рівні" << endl;
	else cout << "Матриці не рівні" << endl;
}

Matrix::~Matrix()
{
	for (int i = 0; i < N; i++)
		if (K[i].v != nullptr)
			delete[](K[i].v);

	if (K != nullptr)
		delete[] K;
}
void operator * (Matrix& a, int x)
{
	Matrix result(a.GetN());
	for (int i = 0; i < a.GetN(); i++)
		for (int j = 0; j < a.GetN(); j++) {
			result[i][j] = 0;
			for (int t = 0; t < a.GetN(); t++)
				result[i][j] += a[i][t] * x;
		}
	cout << result;
}