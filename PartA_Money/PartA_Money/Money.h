/*
	Write a Money class, with data members euro and cent. 
	Add overloaded operators (as member functions where this is possible) to do the following:
	•	Subtract 2 Money amounts
			==> left hand side cannot be mofified, therefore must be friend
	•	Multiply a Money amount by an integer to facilitate code like this:
			==> myMoney = yourMoney * 2;
			==> left hand side need to be modifed, therefore must be friend
	•	Divide a Money amount by a decimal
			==> left hand side cannot be mofified, therefore must be friend
	•	Output a Money amount using the insertion operator
			==> pass in more than one arg, therefore must be friend
	•	Compare 2 Money amounts (with <, > and ==)
*/

#pragma once
#include <ostream>
using namespace std;


class Money
{
public:
	friend ostream& operator<< (ostream& outputStream, const Money& money);
	//friend const Money operator+ (Money& left, const Money& right); // left can be modified
	friend const Money operator+ (const Money& left, const Money& right);
	friend const Money operator- (const Money& left, const Money& right);
	friend const Money operator* (const Money& money, int multiplyBy);
	friend const Money operator/ (const Money& money, double dividedBy);
	
	// without friend, other friend function cannot get access
	friend int getTotalCent(const Money& amount); // to handle when pass in -5.70 for example

	Money();
	Money(int euro);
	Money(int euro, int cent);
	Money(double amount);

	bool operator< (const Money& right);
	bool operator> (const Money& right);
	bool operator== (const Money& right);

private:
	int euro;
	int cent;
};
