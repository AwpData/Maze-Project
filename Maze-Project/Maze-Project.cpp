#include <iostream>
#include "Queue.h"
#include "Stack.h"
using namespace std;


int main()
{
	Queue queue;
	queue.enqueue(5);
	queue.printQueue();
	queue.enqueue(4);
	queue.printQueue();
	queue.enqueue(3);
	queue.printQueue();
	queue.enqueue(2);
	queue.printQueue();
	queue.enqueue(1);
	queue.printQueue();

	queue.dequeue(); // Bye 5
	queue.dequeue(); // Bye 4
	queue.dequeue(); // Bye 3
	queue.dequeue(); // Bye 2
	queue.dequeue(); // Bye 1

	queue.enqueue(10);

}

