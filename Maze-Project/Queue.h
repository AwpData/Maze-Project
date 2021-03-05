#ifndef Queue_H
#pragma once

const int ARRSIZE = 5;
class Queue {
private:
	int arr[ARRSIZE];
	int queueSize = ARRSIZE;
	int front;
	int rear;
	int numbers;
public:
	Queue();

	void enqueue(int num);
	int dequeue();

	bool isEmpty();
	bool isFull();

	void clear();

	void printQueue();
};
#endif
