#include <iomanip>
#include "Matrix.h"
#include "Operation.h"


//std::ostream & operator<< (std::ostream & o, const Operation & r) {
//	return o << r.coutM() << '\n';
//}


int main()
{
	unsigned int x, c, r;
	bool v = false;
	cout << setw(75) << "Welcom at Matrix calculator\n";
	do 
	{	
		if (v == true)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\aInvalid input, try again\n";
		}
		cout << "please choose the operation: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.exit \n->";
		cin >> x;
		v = true;
	} while (x<1||x>4);
	
	Operation a, b;

	cout << "Enter the first matrix size:\n";
	cin >> r >> c;
	a.mkMat(r, c);
	cout << "Enter the second matrix size:\n";
	cin >> r >> c;
	b.mkMat(r, c);

	
	cout << "Enter the first matrix:\n";
	a.cinM();
	cout << "Enter the second matrix:\n";
	b.cinM();

	Operation z;
	switch (x)
	{
		case 1:
		{
			z = a + b;
			z.coutM();
			z.printsize();
			break;
		}
		case 2:
		{
			z = a - b;
			z.coutM();
			z.printsize();
			break;
		}
		case 3:
		{
			z = a * b;
			z.coutM();
			z.printsize();
			break;
		}
		case 4:exit(0);
	}

	system("pause");
	return 0;
}