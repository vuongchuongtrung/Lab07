#include "StackOfDoubles.h"


StackOfDoubles::StackOfDoubles()
	: top(NULL)
{
	cout << "Stack Example: LIFO (Last In First Out)" << endl;
}

StackOfDoubles::~StackOfDoubles()
{
	ListNodePtr tempPtr;
	while (top)
	{
		tempPtr = top;
		top = top->next;
		delete tempPtr;
	}
}

// perform insert at the front/top of the stack
void StackOfDoubles::push(double data)
{
	DoubleListNode* newNode = new DoubleListNode(data);
	if (newNode)
	{
		newNode->next = top;
		top = newNode;
	}
	else
	{
		cout << "Push Could Not Be Done!" << endl;
	}
}

void StackOfDoubles::pop()
{
	double data = 0;
	if (!top) // empty list
	{
		cout << "Pop cannot be done with an empty stack!\n" << endl;
	}
	else // because insert at the front/start => most recent will be at front/start
	{
		ListNodePtr tempPtr = top;
		top = top->next;
		data = tempPtr->data;
		cout << "\nPoping the most recent! Data = " << data << endl;
		delete tempPtr;
	}
}

double StackOfDoubles::getTop()
{
	double data = 0;
	if (!top)
	{
		data = 0;
		cout << "It is an empty stack!\n" << endl;
	}
	else
	{
		data = top->data;
		cout << "Top data is: " << data << endl;
	}
	return data;
}


ostream& operator<< (ostream& str, const StackOfDoubles &stackObj)
{
	ListNodePtr tempPtr = stackObj.top;
	if (!tempPtr)
	{
		str << "The stack is empty, nothing to be displayed!" << endl;
	}
	else
	{
		setColor(11);
		str << "\nStack:" << "\n"
			<< "======" << endl;
		setColor(7);
		while (tempPtr != NULL)
		{
			setColor(10);
			str << "\t" << "| " << tempPtr->getData() << " |" << "\n"
				<< "\t" << "|___|" << endl;
			tempPtr = tempPtr->getNext();
		}
		setColor(7);
	}
	return str;
}

/*
 * usage: used/modified
 * availability: http://www.cplusplus.com/forum/beginner/77879/
 * on 03/11/2016, at 13:30
 *
 * Color values:
 * 0 = Black			8 = Gray
 * 1 = Blue				9 = Light Blue
 * 2 = Green			A = Light Green
 * 3 = Aqua				B = Light Aqua
 * 4 = Red				C = Light Red
 * 5 = Purple			D = Light Purple
 * 6 = Yellow			E = Light Yellow
 * 7 = White			F = Bright White
 */
void setColor(int value)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}
