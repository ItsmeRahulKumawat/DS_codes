//#include<iostream>
//using namespace std;
//
//string postfix;
//
//class stack {
//private:
//	int top;
//	char* sArray;
//public:
//	stack() {
//		top = -1;
//		sArray = new char[100];
//	}
//	void push(char data);
//	char pop();
//	void peek(int index);
//	char stackTop();
//	int isEmpty();
//	int isFull();
//	void display();
//	int toPostfix(string s);
//	int pre(char data);
//	int isOperand(char data);
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
//void stack::push(char data){
//	if ( pre(data) > pre(sArray[top]) ) {
//		top++;
//		sArray[top] = data;
//	}
//	else {
//		while (pre(data) <= pre(sArray[top])) {
//			char d = pop();
//			postfix += d;
//		}
//		top++;
//		sArray[top] = data;
//	}
//}
//
//char stack::pop() {
//	char x = sArray[top];
//	sArray[top] = 0;
//	top--;
//	return x;
//}
//
//char stack::stackTop() {
//	if (top == -1)
//		return 0;
//	else
//		return sArray[top];
//}
//
//int stack::isEmpty() {
//	if (top == -1)
//		return 1;
//	else
//		return 0;
//}
//
////int stack::isFull()
////{
////	if (top == size - 1)
////		return 1;
////	else
////		return 0;
////}
//
//int stack:: isOperand(char data) {
//	if (data != '*' && data != '+' && data != '-' && data != '/')
//		return 1;
//	else
//		return 0;
//}
//
//int stack:: pre(char data) {
//	if (data == '+' || data == '-')
//		return 1;
//	else if (data == '*' || data == '/')
//		return 2;
//	return 0;
//}
//
//int stack::toPostfix(string s) {
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (isOperand(s[i])) {
//			postfix += s[i];
//		}
//		else {
//			push(s[i]);
//		}
//	}
//	while (top != -1)
//	{
//		char d = pop();
//		postfix += d;
//	}
//	return 0;
//}
//int main()
//{
//	stack s1;
//	string s;
//	cout << "Enter a expression to convert it into postfix" << endl;
//	cin >> s;
//
//	s1.toPostfix(s);
//	cout << endl;
//	cout << postfix << endl;
//	
//	return 0;
//}