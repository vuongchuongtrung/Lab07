#include "DoubleListNode.h"

DoubleListNode::DoubleListNode()
	: data(0), next(NULL)
{}

DoubleListNode::DoubleListNode(double data)
	: data(data), next(NULL)
{}

double DoubleListNode::getData()
{
	return data;
}

DoubleListNode* DoubleListNode::getNext()
{
	return next;
}
