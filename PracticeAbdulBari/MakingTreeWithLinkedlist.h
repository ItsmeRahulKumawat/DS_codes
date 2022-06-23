//#include<iostream>
//#ifndef MakingTreeWithLinkedlist
//#define MakingTreeWithLinkedlist
//
//using namespace std;
//
//class Node {
//public:
//	Node* lchild;
//	int data;
//	Node* rchild;
//};
//class Queue {
//private:
//	int front;
//	int rear;
//	int size;
//	Node** Q; // pointer of pointers
//public:
//	Queue() {
//		front = rear = -1;
//		size = 10;
//		Q = new Node*[size];
//	}
//	Queue(int size) {
//		front = rear = -1;
//		this->size = size;
//		Q = new Node*[this->size];
//	}
//	void enqueue(Node* x);
//	Node* dequeue();
//	void display();
//};
//void Queue::enqueue(Node* x) {
//	if (rear == size - 1) {
//		cout << "q full" << endl;
//	}
//	else {
//		rear++;
//		Q[rear] = x;
//	}
//}
//Node* Queue::dequeue() {
//	Node* x = NULL;
//	if (front == rear) {
//		cout << "q empty" << endl;
//	}
//	else {
//		front++;
//		x = Q[front];
//		Q[front] = 0;
//	}
//	return x;
//}
//void Queue::display() {
//	for (int i = front+1; i <= rear; i++) {
//		cout << Q[i] << " ";
//	}
//}
