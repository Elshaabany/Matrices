#include "Operation.h"



Operation::Operation()
{
	
}

Operation::Operation(int r ,int c) 
{
	row = r;
	col = c;
	mkMat(row, col);
}

Operation & Operation::operator= (const Operation & rhs) 
{
	if (m == NULL)
		mkMat(rhs.row, rhs.col);
	if (this != &rhs)
	{
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				m[i][j] = rhs.m[i][j];
	}
	return *this;
}

Operation & Operation::operator= (const double **mat)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			m[i][j] = mat[i][j];

	return *this;
}


Operation Operation::operator+ (const Operation & rhs) const
{															 
	Operation temp(rhs.row,rhs.col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			temp.m[i][j] = m[i][j] + rhs.m[i][j];
	return temp;
}

Operation Operation::operator- (const Operation & rhs) const
{
	Operation temp(rhs.row, rhs.col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			temp.m[i][j] = m[i][j] - rhs.m[i][j];
	return temp;
}

Operation Operation::operator* (const Operation & rhs) const
{
	Operation temp(row, rhs.col);
	for (int x = 0; x < row; x++)
		for (int i = 0; i < rhs.col; i++)
			for (int j = 0; j < rhs.row; j++)
				temp.m[x][i] += m[x][j] * rhs.m[j][i];
	return temp;
}

Operation Operation::inv(Operation m)
{

}

void Operation::printsize() const
{
	cout << "My size is " << row << 'X' << col << '\n';
}


Operation::~Operation()
{
}
