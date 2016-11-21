#include "Money.h"
#include <iostream>
using namespace std;


int main()
{
	Money m1;		 // default constructor is call, euro and cent initialized to Zero
	Money m2(2);	 // pass in euro only
	Money m3(3, 30); // pass in euro and cent
	Money m4(4.40);  // pass in amount

	operator<< (cout, m1);
	operator<< (cout, m2);
	operator<< (cout, m3);
	operator<< (cout, m4);
	cout << endl; // print blank line

	Money tony(5.50), paul(5.50);
	if (tony.operator==(paul))
	{
		cout << "Tony and Paul both have the same amount of money!" << endl;
	}

	Money mary(2.2), sara(2.3);
	if (mary.operator<(sara))
	{
		cout << "Mary has less money than Sara!" << endl;
	}
	if (sara.operator>(mary))
	{
		cout << "Sara has more money than Rose!" << endl;
	}
	if (!sara.operator==(mary))
	{
		cout << "Sara and Mary do not have the same amount of money!" << endl;
	}
	cout << endl; // print blank line
	
	Money m5, m6(4.60), m7(-5.70);
	m5 = operator+ (m6, m7); // 4.60 - 5.70 = -1.10
	operator<< (cout, m5);

	m5 = operator- (m6, m7); // 4.60 - (-5.70) = 10.30
	operator<< (cout, m5);

	m5 = operator*(m6, 3); // 4.60 * 3 = 13.80
	operator<< (cout, m5);

	m5 = operator/(m7, 3.3); // -5.70 / 3.3 = -1.727272... ==> -1.73
	operator<< (cout, m5);

	system("pause");
	return 0;
}
