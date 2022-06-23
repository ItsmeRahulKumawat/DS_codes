//#include<iostream>
//#include<string>
//using namespace std;
//
//string postfix;
//
//class stack {
//private:
//	int top;
//	int size;
//	char* c;
//public:
//	stack() {
//		top = -1;
//		c = new char[20];
//	}
//	void push(char data);
//	int pop();
//	int isOperand(char data);
//	int inStackPre(char data);
//	int outStackPre(char data);
//	void toPostfix(string s);
//};
//void stack::push(char data) {
//	if (top == -1) {
//		top++;
//		c[top] = data;
//	}
//	else if (outStackPre(data) > inStackPre(c[top])) {
//		top++;
//		c[top] = data;
//	}
//	else {
//		while (outStackPre(data) <= inStackPre(c[top])) {
//			char x = pop();
//			if (x == '(')
//				continue;
//			else
//				postfix += x;		
//		}
//		if (c[top] != '(' && data != ')') {
//			top++;
//			c[top] = data;
//		}
//	}
//}
//int stack::pop() {
//	char x = c[top];
//	c[top] = 0;
//	top--;
//	return x;
//}
//int stack::isOperand(char data) {
//	if (data == '*' || data == '+' || data == '-' || data == '/' || data == '^' || data == '(' || data == ')')
//		return 0;
//	else
//		return 1;
//}
//int stack::inStackPre(char data) {
//	if (data == '+' || data == '-')
//		return 2;
//	else if (data == '*' || data == '/')
//		return 4;
//	else if (data == '^')
//		return 5;
//	else if (data == '(')
//		return 0;
//}
//int stack::outStackPre(char data) {
//	if (data == '+' || data == '-')
//		return 1;
//	else if (data == '*' || data == '/')
//		return 3;
//	else if (data == '^')
//		return 6;
//	else if (data == '(')
//		return 7;
//	else if (data == ')')
//		return 0;
//}
//void stack::toPostfix(string s) {
//	for (int i = 0; i < s.size(); i++) {
//		if (isOperand(s[i]))
//			postfix += s[i];
//		else {
//			push(s[i]);
//		}
//	}
//	while (top != -1) {
//		char x = pop();
//		if (x == ')')
//			continue;
//		else
//			postfix += x;
//	}
//}
//
//int main()
//{
//	stack s1;
//	string s;
//	cout << "Enter the expression : ";
//	cin >> s;
//	s1.toPostfix(s);
//
//	cout << postfix << endl;
//	return 0;
//}