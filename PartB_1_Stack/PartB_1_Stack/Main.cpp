#include "StackOfDoubles.h"
#include <ostream>


int main()
{
	StackOfDoubles stack;

	operator<< (cout, stack);
	stack.pop();

	stack.push(1);
	stack.push(2);
	stack.push(3);
	operator<< (cout, stack);

	stack.pop();
	operator<< (cout, stack);

	stack.~StackOfDoubles();
	system("pause");
	return 0;
}
