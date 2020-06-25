#include <iostream>
#include <string>

using namespace std;

#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
protected:
	int row, col;
    double ** m;

private:
	void cMat(int, int);
	void intialize(int, int);	

public:
	
	Matrix();
	Matrix(int, int);
	Matrix(const Matrix &);
	void mkMat(int, int);
	void cinM();
	void coutM() const;
	virtual void printsize() const;
	~Matrix();
};

#endif 
