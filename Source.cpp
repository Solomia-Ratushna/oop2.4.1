#include <iostream>
#include "Matrix.h"
#include <Windows.h> 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Matrix A(3), B(3), z;
	int x;
	cout << "������ ������� 1" << endl;
	cin >> A;

	cout << "������� 1:" << endl;
	cout << A;

	cout << "���������� ����� ������� 1:" << A.MatrixNorm() << endl;

	cout << "������ ������� 2" << endl;
	cin >> B;

	cout << "������� 2:" << endl;
	cout << B;

	cout << "���������� ����� ������� 2:" << B.MatrixNorm() << endl;
	cout << "_____________________________" << endl;

	cout << "��������� ������� 1 � 2:" << endl;
	A.ComparisonMatrix(A, B);
	cout << "_____________________________" << endl;
	cout << "M������� ������� �� ������" << endl;
	
	
	cout << "x = ? "; cin >> x;
	cout << "�������� ������� A �� ������ :" << endl;
	A* x;
	cout << "�������� ������� � �� ������ :" << endl;
	B* x; cout << endl;
	

	return 0;
}
