// Сложение, вычитани и перемножение матриц
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{
	int a11, a12, a13, a21, a22, a23, a31, a32, a33, b11, b12, b13, b21, b22, b23, b31, b32, b33, c11, c12, c13, c21, c22, c23, c31, c32, c33;
	int m1, n1;
	int m2, n2;
	string l;
	string s1 = "+";
	string s2 = "*";
	string s3 = "-";
	cout << "Enter the number of columnsrows in your first matrix (max 3x3) m =  "; // Количество строк матрицы
	cin >> m1;
	cout << "Enter the number of rows in your first matrix (max 3x3) n =  "; // Количество столбцов матрицы 
	cin >> n1;
	cout << "Enter the numbers of your first matrix (line by line)" << endl; // Ввод чисел первой матрицы 
	if (m1 == 1 && n1 == 2)
	{
		cout << "a11 =  ";
		cin >> a11;
		cout << "a12 =  ";
		cin >> a12;
	}
	else if (m1 == 2 && n1 == 1)
	{
		cout << "a11 =  ";
		cin >> a11;
		cout << "a21 =  ";
		cin >> a21;
	}
	else if (m1 == 1 && n1 == 3)
	{
		cout << "a11 = ";
		cin >> a11;
		cout << "a12 = ";
		cin >> a12;
		cout << "a13 = ";
		cin >> a13;
	}
	else if (m1 == 3 && n1 == 1)
	{
		cout << "a11 = ";
		cin >> a11;
		cout << "a21 = ";
		cin >> a21;
		cout << "a31 = ";
		cin >> a31;
	}
	else if (m1 == 2 && n1 == 2)
	{
		cout << "a11 = ";
		cin >> a11;
		cout << "a12 = ";
		cin >> a12;
		cout << "a21 = ";
		cin >> a21;
		cout << "a22 = ";
		cin >> a22;
	}
	else if (m1 == 2 && n1 == 3)
	{
		cout << "a11 = ";
		cin >> a11;
		cout << "a12 = ";
		cin >> a12;
		cout << "a13 = ";
		cin >> a13;
		cout << "a21 = ";
		cin >> a21;
		cout << "a22 = ";
		cin >> a22;
		cout << "a23 = ";
		cin >> a23;
	}
	else if (m1 == 3 && n1 == 2)
	{
		cout << "a11 = ";
		cin >> a11;
		cout << "a12 = ";
		cin >> a12;
		cout << "a21 = ";
		cin >> a21;
		cout << "a22 = ";
		cin >> a22;
		cout << "a31 = ";
		cin >> a31;
		cout << "a32 = ";
		cin >> a32;
	}
	else if (m1 == 3 && n1 == 3)
	{
		cout << "a11 = ";
		cin >> a11;
		cout << "a12 = ";
		cin >> a12;
		cout << "a13 = ";
		cin >> a13;
		cout << "a21 = ";
		cin >> a21;
		cout << "a22 = ";
		cin >> a22;
		cout << "a23 = ";
		cin >> a23;
		cout << "a31 = ";
		cin >> a31;
		cout << "a32 = ";
		cin >> a32;
		cout << "a33 = ";
		cin >> a33;

	}
	else if (m1 <= 0 && m1 > 3 && n1 <= 0 && n1 > 3) // Значене чисел матрицы выходят за рамки дозволенного 
	{
		cout << "Your matrix does not meet the condition" << endl;
	}

	cout << "View your first matrix" << endl; // Вывод первой матрицы на экран в общем виде
	if (m1 == 1 && n1 == 2)
	{
		cout << "   " << a11; cout << "   " << a12 << endl;
	}
	else if (m1 == 2 && n1 == 1)
	{
		cout << "   " << a11 << endl;
		cout << "   " << a21 << endl;
	}
	else if (m1 == 1 && n1 == 3)
	{
		cout << "   " << a11; cout << "   " << a12; cout << "   " << a13 << endl;
	}
	else if (m1 == 3 && n1 == 1)
	{
		cout << "   " << a11 << endl;
		cout << "   " << a21 << endl;
		cout << "   " << a31 << endl;
	}
	else if (m1 == 2 && n1 == 2)
	{
		cout << "   " << a11; cout << "   " << a12 << endl;
		cout << "   " << a21; cout << "   " << a22 << endl;
	}
	else if (m1 == 2 && n1 == 3)
	{
		cout << "   " << a11; cout << "   " << a12; cout << "   " << a13 << endl;
		cout << "   " << a21; cout << "   " << a22; cout << "   " << a23 << endl;
	}
	else if (m1 == 3 && n1 == 2)
	{
		cout << "   " << a11; cout << "   " << a12 << endl;
		cout << "   " << a21; cout << "   " << a22 << endl;
		cout << "   " << a31; cout << "   " << a32 << endl;
	}
	else if (m1 == 3 && n1 == 3)
	{
		cout << "   " << a11; cout << "   " << a12; cout << "   " << a13 << endl;
		cout << "   " << a21; cout << "   " << a22; cout << "   " << a23 << endl;
		cout << "   " << a31; cout << "   " << a32; cout << "   " << a33 << endl;
	}

	cout << "Enter the number of columnsrows in your second matrix     m =  "; // Количество строк матрицы
	cin >> m2;
	cout << "Enter the number of rows in your second matrix            n =  "; // Количество столбцов матрицы 
	cin >> n2;

	cout << "Enter the numbers of your second matrix (line by line)" << endl; // Ввод чисел второй матрицы 
	if (m2 == 1 && n2 == 2)
	{
		cout << "b11 =  ";
		cin >> b11;
		cout << "b12 =  ";
		cin >> b12;
	}
	else if (m2 == 2 && n2 == 1)
	{
		cout << "b11 =  ";
		cin >> b11;
		cout << "b21 =  ";
		cin >> b21;
	}
	else if (m2 == 1 && n2 == 3)
	{
		cout << "b11 = ";
		cin >> b11;
		cout << "b12 = ";
		cin >> b12;
		cout << "b13 = ";
		cin >> b13;
	}
	else if (m2 == 3 && n2 == 1)
	{
		cout << "b11 = ";
		cin >> b11;
		cout << "b21 = ";
		cin >> b21;
		cout << "b31 = ";
		cin >> b31;
	}
	else if (m2 == 2 && n2 == 2)
	{
		cout << "b11 = ";
		cin >> b11;
		cout << "b12 = ";
		cin >> b12;
		cout << "b21 = ";
		cin >> b21;
		cout << "b22 = ";
		cin >> b22;
	}
	else if (m2 == 2 && n2 == 3)
	{
		cout << "b11 = ";
		cin >> b11;
		cout << "b12 = ";
		cin >> b12;
		cout << "b13 = ";
		cin >> b13;
		cout << "b21 = ";
		cin >> b21;
		cout << "b22 = ";
		cin >> b22;
		cout << "b23 = ";
		cin >> b23;
	}
	else if (m2 == 3 && n2 == 2)
	{
		cout << "b11 = ";
		cin >> b11;
		cout << "b12 = ";
		cin >> b12;
		cout << "b21 = ";
		cin >> b21;
		cout << "b22 = ";
		cin >> b22;
		cout << "b31 = ";
		cin >> b31;
		cout << "b32 = ";
		cin >> b32;
	}
	else if (m2 == 3 && n2 == 3)
	{
		cout << "b11 = ";
		cin >> b11;
		cout << "b12 = ";
		cin >> b12;
		cout << "b13 = ";
		cin >> b13;
		cout << "b21 = ";
		cin >> b21;
		cout << "b22 = ";
		cin >> b22;
		cout << "b23 = ";
		cin >> b23;
		cout << "b31 = ";
		cin >> b31;
		cout << "b32 = ";
		cin >> b32;
		cout << "b33 = ";
		cin >> b33;

	}
	else if (m2 <= 0 && m2 > 3 && n2 <= 0 && n2 > 3) // Значене чисел матрицы выходят за рамки дозволенного 
	{
		cout << "We can't do that " << endl;
	}

	cout << "View your second matrix" << endl; // Вывод второй матрицы на экран в общем виде
	if (m2 == 1 && n2 == 2)
	{
		cout << "   " << b11; cout << "   " << b12 << endl;
	}
	else if (m2 == 2 && n2 == 1)
	{
		cout << "   " << b11 << endl;
		cout << "   " << b21 << endl;
	}
	else if (m2 == 1 && n2 == 3)
	{
		cout << "   " << b11; cout << "   " << b12; cout << "   " << b13 << endl;
	}
	else if (m2 == 3 && n2 == 1)
	{
		cout << "   " << b11 << endl;
		cout << "   " << b21 << endl;
		cout << "   " << b31 << endl;
	}
	else if (m2 == 2 && n2 == 2)
	{
		cout << "   " << b11; cout << "   " << b12 << endl;
		cout << "   " << b21; cout << "   " << b22 << endl;
	}
	else if (m2 == 2 && n2 == 3)
	{
		cout << "   " << b11; cout << "   " << b12; cout << "   " << b13 << endl;
		cout << "   " << b21; cout << "   " << b22; cout << "   " << b23 << endl;
	}
	else if (m2 == 3 && n2 == 2)
	{
		cout << "   " << b11; cout << "   " << b12 << endl;
		cout << "   " << b21; cout << "   " << b22 << endl;
		cout << "   " << b31; cout << "   " << b32 << endl;
	}
	else if (m2 == 3 && n2 == 3)
	{
		cout << "   " << b11; cout << "   " << b12; cout << "   " << b13 << endl;
		cout << "   " << b21; cout << "   " << b22; cout << "   " << b23 << endl;
		cout << "   " << b31; cout << "   " << b32; cout << "   " << b33 << endl;
	}

	cout << "What action do you want to perform (sum or multiplication(Enter + or * only))" << endl; // Операции с матрицами
	cin >> l;
	if (l == s1) // Сложение матриц
	{
		if (m1 == 1 && n1 == 2 && m2 == 1 && n2 == 2)
		{
			c11 = a11 + b11;
			c12 = a12 + b12;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
		}
		else if (m1 == 2 && n1 == 1 && m2 == 2 && n2 == 1)
		{
			c11 = a11 + b11;
			c21 = a21 + b21;
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
		}
		else if (m1 == 1 && n1 == 3 && m2 == 1 && n2 == 3)
		{
			c11 = a11 + b11;
			c12 = a12 + b12;
			c13 = a13 + b13;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
		}
		else if (m1 == 3 && n1 == 1 && m2 == 3 && n2 == 1)
		{
			c11 = a11 + b11;
			c21 = a21 + b21;
			c31 = a31 + b31;
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
			cout << "   " << c31 << endl;
		}
		else if (m1 == 2 && n1 == 2 && m2 == 2 && n2 == 2)
		{
			c11 = a11 + b11;
			c12 = a12 + b12;
			c21 = a21 + b21;
			c22 = a22 + b22;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
		}
		else if (m1 == 2 && n1 == 3 && m2 == 2 && n2 == 3)
		{
			c11 = a11 + b11;
			c12 = a12 + b12;
			c13 = a13 + b13;
			c21 = a21 + b21;
			c22 = a22 + b22;
			c23 = a23 + b23;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
		}
		else if (m1 == 3 && n1 == 2 && m2 == 3 && n2 == 2)
		{
			c11 = a11 + b11;
			c12 = a12 + b12;
			c21 = a21 + b21;
			c22 = a22 + b22;
			c31 = a31 + b31;
			c32 = a32 + b32;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
			cout << "   " << c31; cout << "   " << c32 << endl;
		}
		else if (m1 == 3 && n1 == 3 && m2 == 3 && n2 == 3)
		{
			c11 = a11 + b11;
			c12 = a12 + b12;
			c13 = a13 + b13;
			c21 = a21 + b21;
			c22 = a22 + b22;
			c23 = a23 + b23;
			c31 = a31 + b31;
			c32 = a32 + b32;
			c33 = a33 + b33;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
			cout << "   " << c31; cout << "   " << c32; cout << "   " << c33 << endl;
		}
		else if (m1 != m2 && n1 != n2)
		{
			cout << "To perform a matrix addition operation, the number of rows and columns of the first matrix must match the number of rows and columns of the second matrix" << endl;
		}
	}
	if (l == s3) // Вычитание матриц
	{
		if (m1 == 1 && n1 == 2 && m2 == 1 && n2 == 2)
		{
			c11 = a11 - b11;
			c12 = a12 - b12;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
		}
		else if (m1 == 2 && n1 == 1 && m2 == 2 && n2 == 1)
		{
			c11 = a11 - b11;
			c21 = a21 - b21;
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
		}
		else if (m1 == 1 && n1 == 3 && m2 == 1 && n2 == 3)
		{
			c11 = a11 - b11;
			c12 = a12 - b12;
			c13 = a13 - b13;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
		}
		else if (m1 == 3 && n1 == 1 && m2 == 3 && n2 == 1)
		{
			c11 = a11 + b11;
			c21 = a21 + b21;
			c31 = a31 + b31;
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
			cout << "   " << c31 << endl;
		}
		else if (m1 == 2 && n1 == 2 && m2 == 2 && n2 == 2)
		{
			c11 = a11 - b11;
			c12 = a12 - b12;
			c21 = a21 - b21;
			c22 = a22 - b22;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
		}
		else if (m1 == 2 && n1 == 3 && m2 == 2 && n2 == 3)
		{
			c11 = a11 - b11;
			c12 = a12 - b12;
			c13 = a13 - b13;
			c21 = a21 - b21;
			c22 = a22 - b22;
			c23 = a23 - b23;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
		}
		else if (m1 == 3 && n1 == 2 && m2 == 3 && n2 == 2)
		{
			c11 = a11 - b11;
			c12 = a12 - b12;
			c21 = a21 - b21;
			c22 = a22 - b22;
			c31 = a31 - b31;
			c32 = a32 - b32;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
			cout << "   " << c31; cout << "   " << c32 << endl;
		}
		else if (m1 == 3 && n1 == 3 && m2 == 3 && n2 == 3)
		{
			c11 = a11 - b11;
			c12 = a12 - b12;
			c13 = a13 - b13;
			c21 = a21 - b21;
			c22 = a22 - b22;
			c23 = a23 - b23;
			c31 = a31 - b31;
			c32 = a32 - b32;
			c33 = a33 - b33;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
			cout << "   " << c31; cout << "   " << c32; cout << "   " << c33 << endl;
		}
		else if (m1 != m2 && n1 != n2)
		{
			cout << "To perform a matrix addition operation, the number of rows and columns of the first matrix must match the number of rows and columns of the second matrix" << endl;
		}
	if (l == s2) // Перемножение матриц 
	{
		if (m1 == 3 && n1 == 3 && m2 == 3 && n2 == 3)
		{
			c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c12 = (a11 * b12) + (a12 * b22) + (a13 * b32);
			c13 = (a11 * b13) + (a12 * b23) + (a13 * b33);
			c21 = (a21 * b11) + (a22 * b21) + (a23 * b31);
			c22 = (a21 * b12) + (a22 * b22) + (a23 * b32);
			c23 = (a21 * b13) + (a22 * b23) + (a23 * b33);
			c31 = (a31 * b11) + (a32 * b21) + (a33 * b31);
			c32 = (a31 * b12) + (a32 * b22) + (a33 * b32);
			c33 = (a31 * b13) + (a32 * b23) + (a33 * b33);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
			cout << "   " << c31; cout << "   " << c32; cout << "   " << c33 << endl;
		}
		else if (m1 == 3 && n1 == 3 && m2 == 3 && n2 == 2)
		{
			c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c12 = (a11 * b12) + (a12 * b22) + (a13 * b32);
			c21 = (a21 * b11) + (a22 * b21) + (a23 * b31);
			c22 = (a21 * b12) + (a22 * b22) + (a23 * b32);
			c31 = (a31 * b11) + (a32 * b21) + (a33 * b31);
			c32 = (a31 * b12) + (a32 * b22) + (a33 * b32);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
			cout << "   " << c31; cout << "   " << c32 << endl;
		}
		else if (m1 == 3 && n1 == 3 && m2 == 3 && n2 == 1)
		{
			c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c21 = (a21 * b11) + (a22 * b21) + (a23 * b31);
			c31 = (a31 * b11) + (a32 * b21) + (a33 * b31);
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
			cout << "   " << c31 << endl;
		}
		else if (m1 == 3 && n1 == 2 && m2 == 2 && n2 == 3)
		{
			c11 = (a11 * b11) + (a12 * b21);
			c12 = (a11 * b12) + (a12 * b22);
			c13 = (a11 * b13) + (a12 * b32);
			c21 = (a21 * b11) + (a22 * b21);
			c22 = (a21 * b12) + (a22 * b22);
			c23 = (a21 * b13) + (a22 * b23);
			c31 = (a31 * b11) + (a32 * b21);
			c32 = (a31 * b12) + (a32 * b22);
			c33 = (a31 * b13) + (a32 * b23);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
			cout << "   " << c31; cout << "   " << c32; cout << "   " << c33 << endl;
		}
		else if (m1 == 3 && n1 == 2 && m2 == 2 && n2 == 2)
		{
			c11 = (a11 * b11) + (a12 * b21);
			c12 = (a11 * b12) + (a12 * b22);
			c21 = (a21 * b11) + (a22 * b21);
			c22 = (a21 * b12) + (a22 * b22);
			c31 = (a31 * b11) + (a32 * b21);
			c32 = (a31 * b12) + (a32 * b22);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
			cout << "   " << c31; cout << "   " << c32 << endl;
		}
		else if (m1 == 3 && n1 == 2 && m2 == 2 && n2 == 1)
		{
			c11 = (a11 * b11) + (a12 * b21);
			c21 = (a21 * b11) + (a22 * b21);
			c31 = (a31 * b11) + (a32 * b21);
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
			cout << "   " << c31 << endl;
		}
		else if (m1 == 2 && n1 == 3 && m2 == 3 && n2 == 3)
		{
			c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c12 = (a11 * b12) + (a12 * b22) + (a13 * b32);
			c13 = (a11 * b13) + (a12 * b23) + (a13 * b33);
			c21 = (a21 * b11) + (a22 * b21) + (a23 * b31);
			c22 = (a21 * b12) + (a22 * b22) + (a23 * b32);
			c23 = (a21 * b13) + (a22 * b23) + (a23 * b33);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
		}
		else if (m1 == 2 && n1 == 3 && m2 == 3 && n2 == 1)
		{
			c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c21 = (a21 * b11) + (a22 * b21) + (a23 * b31);
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
		}
		else if (m1 == 2 && n1 == 2 && m2 == 2 && n2 == 3)
		{
			c11 = (a11 * b11) + (a12 * b21);
			c12 = (a11 * b12) + (a12 * b22);
			c13 = (a11 * b13) + (a12 * b33);
			c21 = (a21 * b11) + (a22 * b21);
			c22 = (a21 * b12) + (a22 * b22);
			c23 = (a21 * b13) + (a22 * b33);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
		}
		else if (m1 == 2 && n1 == 2 && m2 == 2 && n2 == 1)
		{
		    c11 = (a11 * b11) + (a12 * b21);
			c21 = (a21 * b11) + (a22 * b21);
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
			cout << "   " << c21 << endl;
		}
		else if (m1 == 3 && n1 == 1 && m2 == 1 && n2 == 3)
		{
		    c11 = a11 * b11;
			c12 = a11 * b12;
			c13 = a11 * b13;
			c11 = a21 * b11;
			c12 = a21 * b12;
			c13 = a21 * b13;
			c11 = a31 * b11;
			c12 = a31 * b12;
			c13 = a31 * b13;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
			cout << "   " << c31; cout << "   " << c32; cout << "   " << c33 << endl;
        }
		else if (m1 == 3 && n1 == 1 && m2 == 1 && n2 == 2)
		{
		    c11 = a11 * b11;
			c12 = a11 * b12;
			c21 = a21 * b11;
			c22 = a21 * b12;
			c31 = a31 * b11;
			c32 = a31 * b12;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
			cout << "   " << c31; cout << "   " << c32 << endl;
        }
		else if (m1 == 1 && n1 == 3 && m2 == 3 && n2 == 3)
		{
		    c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c12 = (a11 * b12) + (a12 * b22) + (a13 * b32);
			c13 = (a11 * b13) + (a12 * b23) + (a13 * b33);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
        }
		else if (m1 == 1 && n1 == 3 && m2 == 3 && n2 == 2)
		{
		    c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			c12 = (a11 * b12) + (a12 * b22) + (a13 * b32);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
        }
		else if (m1 == 1 && n1 == 3 && m2 == 3 && n2 == 1)
		{
		    c11 = (a11 * b11) + (a12 * b21) + (a13 * b31);
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
        }
		else if (m1 == 2 && n1 == 1 && m2 == 1 && n2 == 2)
		{
		    c11 = a11 * b11;
			c12 = a11 * b12;
			c21 = a21 * b11;
			c22 = a21 * b12;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
			cout << "   " << c21; cout << "   " << c22 << endl;
        }
		else if (m1 == 2 && n1 == 1 && m2 == 1 && n2 == 3)
		{
		    c11 = a11 * b11;
			c12 = a11 * b12;
			c13 = a11 * b13;
			c21 = a21 * b11;
			c22 = a21 * b12;
			c23 = a21 * b13;
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
			cout << "   " << c21; cout << "   " << c22; cout << "   " << c23 << endl;
        }
		else if (m1 == 1 && n1 == 2 && m2 == 2 && n2 == 3)
		{
		    c11 = (a11 * b11) + (a12 * b21); 
			c12 = (a11 * b12) + (a12 * b22);
			c13 = (a11 * b13) + (a12 * b23);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12; cout << "   " << c13 << endl;
        }
		else if (m1 == 1 && n1 == 2 && m2 == 2 && n2 == 2)
		{
		    c11 = (a11 * b11) + (a12 * b21);
			c12 = (a11 * b12) + (a12 * b22);
			cout << "Result" << endl;
			cout << "   " << c11; cout << "   " << c12 << endl;
        }
		else if (m1 == 1 && n1 == 2 && m2 == 2 && n2 == 1)
		{
		    c11 = (a11 * b11) + (a12 * b21);
			cout << "Result" << endl;
			cout << "   " << c11 << endl;
        }
		else if (n1 != m2)
		{
			cout << "To perform a matrix addition operation, the number of columns in the first matrix must match the number of rows in the second matrix" << endl;
		}
	}

		system("pause");
		return 0;
}