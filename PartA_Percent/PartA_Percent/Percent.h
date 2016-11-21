#pragma once
#include <iostream>
using namespace std;


class Percent
{
public:
	friend bool operator== (const Percent& first, const Percent& second);
	friend bool operator< (const Percent& first, const Percent& second);
	Percent();
	Percent(int valueIn);
	friend istream& operator >> (istream& inputStream, Percent& aPercent);
	friend ostream& operator<< (ostream& outputStream, const Percent& aPercent);

	//There will be other members and friends.
	/* usage: used/modified
	 * availability: Absolute_C++_(5th_Edition).pdf
	 * chapter 8.1: Basic Operator Overloading
	 * page: 324-325
	 */
	const Percent operator+ (const Percent& right) const;
	const Percent operator- (const Percent& right) const;
	const Percent operator* (const Percent& right) const;

private:
	int value;
};
