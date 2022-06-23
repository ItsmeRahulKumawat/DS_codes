//#include<iostream>
//using namespace std;
//
//class Queue {
//private:
//	int size;
//	int front;
//	int rear;
//	int* q;
//public:
//	Queue() {
//		front = rear = -1;
//		cout << "Enter the size of Queue: ";
//		cin >> size;
//		q = new int[size];
//	}
//	void enqueue(int data);
//	int dequeue();
//	void display();
//};
//void Queue::enqueue(int data) {
//	if (rear == size - 1)
//		cout << "Queue is Full" << endl;
//	else {
//		rear++;
//		q[rear] = data;
//	}
//}
//int Queue::dequeue() {
//	if (rear == front)
//		return -1;
//	else {
//		front++;
//		int x = q[front];
//		q[front] = 0;
//		return x;
//	}
//}
//void Queue::display() {
//	int p = front;
//	if (rear == front)
//		cout << "Queue is empty" << endl;
//	else {
//		for (int i = front; i < rear; i++) {
//			p++;
//			cout << q[p] << " ";
//		}
//	}
//	cout << endl;
//}
//int main() {
//	Queue q1;
//	q1.display();
//	cout << q1.dequeue() << " is deleted" << endl;
//	q1.enqueue(10);
//	q1.enqueue(20);
//	q1.enqueue(30);
//	q1.enqueue(40);
//	q1.enqueue(50);
//	q1.enqueue(60);
//	q1.display();
//	cout << q1.dequeue() << " is deleted" << endl;
//	cout << q1.dequeue() << " is deleted" << endl;
//	q1.display();
//
//	return 0;
//}