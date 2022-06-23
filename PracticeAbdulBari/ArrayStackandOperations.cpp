//#include<iostream>
//using namespace std;
//
//class stack {
//private:
//	int size;
//	int top;
//	int* sArray;
//public:
//	stack() {
//		cout << "Enter the size of stack : ";
//		cin >> size;
//		top = -1;
//		sArray = new int[size];
//	}
//	void push(int data);
//	int pop();
//	void peek(int index);
//	void stackTop();
//	void isEmpty();
//	void isFull();
//	void display();
//};
//
//void stack::display() {
//	if (top == -1)
//		cout << "Nothing to display" << endl;
//	else {
//		for (int i = 0; i <= top; i++)
//			cout << sArray[i] << " ";	
//	}
//}
//void stack::push(int data){
//	if (top == size - 1)
//		cout << "Stack overflow hai bhai..." << endl;
//	else {
//		top++;
//		sArray[top] = data;
//	}
//}
//
//int stack::pop() {
//	int x = -1;
//	if (top == -1)
//		cout << "Stack underflow hai bhai..." << endl;
//	else {
//		x = sArray[top];
//		sArray[top] = 0;
//		top--;
//	}
//	return x;
//}
//
//void stack::peek(int index) { // idhar formula hai bhai isme 'top-index+1' karenga to uska index val / val index ayega
//	if (top == -1)
//		cout << "No element in stack bro..." << endl;
//	else if (index > size || index < 0)
//		cout << "Index is not in range yede..." << endl;
//	else {
//		int x = top - index + 1;
//		cout << sArray[x] << " is the value at given index" << endl;
//	}
//}
//
//void stack::stackTop() {
//	if (top == -1)
//		cout << "No element in stack bro..." << endl;
//	else
//		cout << sArray[top] << " is the top element in stack bro..." << endl;
//}
//
//void stack::isEmpty() {
//	if (top == -1)
//		cout << "Emtpy hai bhai" << endl;
//	else
//		cout << "Emtpy nai hai bhai" << endl;
//}
//
//void stack::isFull()
//{
//	if (top == size - 1)
//		cout << "Full hai bhai" << endl;
//	else
//		cout << "Full nai hai bhai" << endl;
//}
//
//int main()
//{
//	stack s1;
//	s1.display();
//	s1.isEmpty();
//	s1.isFull();
//	s1.push(5);
//	s1.push(10);
//	s1.push(20);
//	s1.push(30);
//	s1.stackTop();
//	s1.isFull();
//	s1.peek(3);
//	s1.push(40);
//	s1.isFull();
//	s1.stackTop();
//	s1.display();
//
//	cout << s1.pop() << " is popped" << endl;
//	cout << s1.pop() << " is popped" << endl;
//	cout << s1.pop() << " is popped" << endl;
//	cout << s1.pop() << " is popped" << endl;
//	cout << s1.pop() << " is popped" << endl;
//	cout << s1.pop() << " is popped" << endl;
//
//	s1.isEmpty();
//
//	return 0;
//}