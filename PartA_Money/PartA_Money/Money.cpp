#include "Money.h"
#include <math.h>


Money::Money()
	: euro(0), cent(0)
{}

Money::Money(int euro)
	: euro(euro), cent(0)
{}

Money::Money(int euro, int cent)
	: euro(euro), cent(cent)
{}

/* euro = static_cast<int> (amount);
 * cent = static_cast<int> (amount * 100) % 100; ==> 4.60 will print 4.59
 *
 * double doubleCents = 4.60 * 100;
 * int intCents = static_cast<int> (round(abs(doubleCents))); // tested will give 460
 * cout << intCents << endl;
 */
Money::Money(double amount)
	: euro(static_cast<int>(amount)), cent(static_cast<int>(round(abs(amount * 100))) % 100)
{}

bool Money::operator< (const Money& right)
{
	return (euro < right.euro) || (euro == right.euro && cent < right.cent);
}

bool Money::operator> (const Money& right)
{
	return (euro > right.euro) || (euro == right.euro && cent > right.cent);
}

bool Money::operator== (const Money& right)
{
	return (euro == right.euro && cent == right.cent);
}

ostream& operator<< (ostream& outputStream, const Money& money)
{
	double amount = getTotalCent(money) / 100.0;
	outputStream << amount << endl;
	return outputStream;
}

const Money operator+ (const Money& left, const Money& right)
{
	int totalCent1 = getTotalCent(left);
	int totalCent2 = getTotalCent(right);
	double amount = (totalCent1 + totalCent2) / 100.0;
	return Money(amount);
}

const Money operator- (const Money& left, const Money& right)
{
	int totalCent1 = getTotalCent(left);
	int totalCent2 = getTotalCent(right);
	double amount = (totalCent1 - totalCent2) / 100.0;
	return Money(amount);
}

// Multiply a Money amount by an integer to facilitate code like this:
// myMoney = yourMoney * 2; 
const Money operator* (const Money& amount, int multiplyBy)
{
	double myAmount = getTotalCent(amount) * multiplyBy / 100.0;
	return Money(myAmount);
}

// Divide a Money amount by a decimal
const Money operator/ (const Money& amount, double dividedBy)
{
	double myAmount = getTotalCent(amount) / dividedBy / 100.0;

	return Money(myAmount);
}

int getTotalCent(const Money& amount)
{
	if (amount.euro < 0)
	{
		return (amount.euro * 100 - amount.cent);
	}
	else
	{
		return (amount.euro * 100 + amount.cent);
	}
}
