#ifndef OPERATION_H
#define OPERATION_H

#include "Matrix.h"
class Operation : public Matrix
{
public:
	Operation();
	Operation(int, int);
	Operation & operator= (const Operation &) ;
	Operation operator+ (const Operation &) const;
	Operation operator- (const Operation &) const;
	Operation operator* (const Operation &) const;
	Operation inv(Operation);
	virtual void printsize() const;
	~Operation();
};


#endif

