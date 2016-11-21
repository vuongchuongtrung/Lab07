#include "Percent.h"

Percent::Percent()
	: value(0)
{}

Percent::Percent(int valueIn)
	: value(valueIn)
{}

/* usage: used/modified
 * availability: Absolute_C++_(5th_Edition).pdf
 * chapter 8.1: Basic Operator Overloading
 * page: 326
 */
bool operator== (const Percent& first, const Percent& second)
{
	return (first.value == second.value);
}

/* usage: used/modified
 * availability: http://www.learncpp.com/cpp-tutorial/96-overloading-the-comparison-operators/
 * on 16/11/2016, at 19:45
 */
bool operator< (const Percent& first, const Percent& second)
{
	return (first.value < second.value);
}

istream& operator>> (istream& inputStream, Percent& aPercent)
{
	cout << "\nEnter value: ";
	inputStream >> aPercent.value;
	return inputStream;
}

/* usage: used/modified
 * availability: Absolute_C++_(5th_Edition).pdf
 * chapter 8.1: Basic Operator Overloading
 * page: 327, 348
 */
ostream& operator<< (ostream& outputStream, const Percent& aPercent)
{
	outputStream << aPercent.value << "%" << endl;
	return outputStream;
}

const Percent Percent::operator+ (const Percent& right) const
{
	return Percent(value + right.value);
}

const Percent Percent::operator- (const Percent& right) const
{
	return Percent(value - right.value);
}

const Percent Percent::operator* (const Percent& right) const
{
	return Percent(value * right.value / 100);
}
