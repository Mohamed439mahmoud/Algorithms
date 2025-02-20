// ConsoleApplication122.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
#define max_size 5
class queue {
private:
	int arr[max_size];
	int rear, front;
public:
	queue() {
		rear = -1;
		front = -1;
	}
	bool isEmpty() {
		return(rear == -1);
	}
	bool isFull() {
		return (rear + 1 == max_size);
	}
	void enqueue(int x) {
		if (isFull())
		{
			cout << "the queue is full\n";
			return;
		}
		else
		{
			if (isEmpty())
			{
				rear = front = 0;
			}
			else
			{
				rear++;
				arr[rear] = x;
				cout << "enqueue" << x << "in the queue\n";
			}
		}
	}
	void dequeue() {
		if (isEmpty())
		{
			cout << "the dequeue isEmpty\n";
			return;
		}
		else
		{
			front++;
			cout << "Dequeued " << arr[front] << " from the queue\n";
			if (front > rear)
			{
				front = rear = -1;
			}
		}
	}
};
int main()
{
	queue b1;
	b1.enqueue(10);
	b1.enqueue(11);
	b1.enqueue(12);
	b1.enqueue(13);
	b1.enqueue(14);
	b1.dequeue();
	b1.dequeue();
	b1.dequeue();
	b1.dequeue();
	b1.dequeue();


}

