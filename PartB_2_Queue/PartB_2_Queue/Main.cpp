/* usage: used/modifed
 * availability: http://www.cplusplus.com/reference/queue/queue/queue/
 * on 21/11/2016, at 20:30
 */
#include <iostream>
#include <queue>
#include <list>
using namespace std;


int main()
{
	queue<double, list<double>> myQueue;

	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);
	myQueue.push(4);
	myQueue.push(5);

	myQueue.pop();

	cout << "Front of queue is: " << myQueue.front() << endl;
	cout << "Back  of queue is: " << myQueue.back() << endl;

	cout << "\nSize  of queue is: " << myQueue.size() << endl;

	cout << "\nThe full queue is: ";
	while (!myQueue.empty())
	{
		cout << myQueue.front() << "  ";
		myQueue.pop(); // queue will be empty after loop finished
	}
	cout << endl;

	system("pause");
	return 0;
}
