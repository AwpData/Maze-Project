#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
	this->front = -1;
	this->rear = -1;
	this->numbers = 0;
}

void Queue::enqueue(int num) {
	if (this->isFull()) {
		cout << "Queue is too full, dequeue first!" << endl;
		return;
	}
	else {
		rear++;
		arr[rear % queueSize] = num;
		numbers++;
		if (rear == queueSize) {
			rear = -1;
		}
	}
}

int Queue::dequeue() {
	if (this->isEmpty()) {
		cout << "Queue is empty, enqueue some numbers first!" << endl;
		return -9999;
	}
	else {
		front++;
		int returnedValue = arr[front % queueSize];
		numbers--;
		return returnedValue;
	}
}

bool Queue::isEmpty() {
	return (numbers == 0);
}

bool Queue::isFull() {
	return (numbers == queueSize);
}

void Queue::clear() {
	this->front = -1;
	this->rear = -1;
	this->numbers = 0;
}

void Queue::printQueue() {
	/*cout << "[";
	if (numbers > 0) {
		cout << arr[front];
	}
	for (int i = front + 1; i < numbers; i++) {
		if (i == queueSize || i > queueSize) {
			i = 0;
		}
		cout << ", " << arr[i];
	}
	cout << "]" << endl;*/

}