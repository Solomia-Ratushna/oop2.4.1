#include <iostream>
#include "Matrix.h"
#include <Windows.h> 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Matrix A(3), B(3), z;
	int x;
	cout << "¬вед≥ть матриц€ 1" << endl;
	cin >> A;

	cout << "ћатриц€ 1:" << endl;
	cout << A;

	cout << "ќбчисленн€ норми матриц≥ 1:" << A.MatrixNorm() << endl;

	cout << "¬вед≥ть матриц€ 2" << endl;
	cin >> B;

	cout << "ћатриц€ 2:" << endl;
	cout << B;

	cout << "ќбчисленн€ норми матриц≥ 2:" << B.MatrixNorm() << endl;
	cout << "_____________________________" << endl;

	cout << "ѕор≥вн€нн€ матриць 1 ≥ 2:" << endl;
	A.ComparisonMatrix(A, B);
	cout << "_____________________________" << endl;
	cout << "Mноженн€ матриц≥ на скал€р" << endl;
	
	
	cout << "x = ? "; cin >> x;
	cout << "ћноженн€ матриц≥ A на скал€р :" << endl;
	A* x;
	cout << "ћноженн€ матриц≥ ¬ на скал€р :" << endl;
	B* x; cout << endl;
	

	return 0;
}
