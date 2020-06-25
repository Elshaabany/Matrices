#include "Matrix.h"

Matrix::Matrix()
{
	
}

Matrix::Matrix(int r, int c) : col(c), row(r)
{
	mkMat(row, col);
}

Matrix::Matrix(const Matrix & rhs) : col(rhs.col) , row(rhs.row)
{
	cMat(rhs.row, rhs.col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			m[i][j] = rhs.m[i][j];
}

void Matrix::mkMat(int r, int c)
{
	row = r;
	col = c;
	cMat(r, c);
	intialize(r, c);
}

void Matrix::cMat(int r, int c)                //Create Matrix
{
	m = new double*[r] ;
	for (int i = 0; i < r; i++)
		m[i] = new double[c];	
}

void Matrix::intialize(int r, int c)                //Create Matrix
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			m[i][j] = 0;
}

void Matrix::cinM()								//Cin the Matrix
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> m[i][j];
}

void Matrix::coutM() const							//Cout the Matrix
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << (m[i][j]) << ' ';
		}
		cout << '\n';
	}
}

void Matrix::printsize() const
{

}


Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
		delete [] m[i];
	delete [] m;
}
