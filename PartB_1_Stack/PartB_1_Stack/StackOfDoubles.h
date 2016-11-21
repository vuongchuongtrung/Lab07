#pragma once
#include "DoubleListNode.h"
#include <string>
#include <iostream>
#include <Windows.h> // uses for Color
using namespace std;


class StackOfDoubles // LinkedList
{
	friend class DoubleListNode;

public:
	friend ostream& operator<< (ostream& str, const StackOfDoubles &stackObj);
	friend void setColor(int colorValue);

	StackOfDoubles();
	~StackOfDoubles();

	void push(double data);
	void pop();
	double getTop();

private:
	DoubleListNode *top;
};
typedef StackOfDoubles *List;
