/* usage: used/modifed
 * availability: http://www.cplusplus.com/reference/queue/priority_queue/priority_queue/
 * on 21/11/2016, at 21:45
 */

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main()
{
	priority_queue<int, vector<double>> pQueue;
	pQueue.push(1);
	pQueue.push(2);
	pQueue.push(3);

	cout << "Front: " << pQueue.top() << endl;
	
	pQueue.pop();
	cout << "Front: " << pQueue.top() << endl;

	system("pause");
	return 0;
}
