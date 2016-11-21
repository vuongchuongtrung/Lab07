#pragma once
#include "StackOfDoubles.h"
#include <string>


class DoubleListNode // ListNode
{
	friend class StackOfDoubles;

public:
	DoubleListNode();
	DoubleListNode(double data);
	double getData();
	DoubleListNode* getNext();

private:
	double data;
	DoubleListNode *next;
};
typedef DoubleListNode *ListNodePtr;
