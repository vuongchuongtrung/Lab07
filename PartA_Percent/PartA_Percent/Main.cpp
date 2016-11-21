#include "Percent.h"
#include <iostream>
using namespace std;


int main()
{
	Percent p1(10), p2(20);
	operator<< (cout, p1);
	operator<< (cout, p2);

	Percent p3;
	p3 = p1.operator+(p2); // 10 + 20 = 30
	operator<<(cout, p3);

	Percent p4;
	p4 = p1.operator-(p2); // 10 - 20 = -10
	operator<< (cout, p4);

	Percent p5;
	p5 = 50;
	p5 = p5.operator*(p5); // 50 * 50 / 100 = 25
	operator<< (cout, p5);

	Percent p6;
	operator >> (cin, p6); // whatever user input is the value
	operator<< (cout, p6);

	system("pause");
	return 0;
}
