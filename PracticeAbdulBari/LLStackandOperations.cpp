//#include<iostream>
//using namespace std;
//
//class stack {
//private:
//	int data;
//	stack* next;
//public:
//	/*stack() {
//		stack s;
//		s.data = 0;
//		s.next = nullptr;
//	}*/
//	void push(int data);
//	int pop();
//	int peek(int index);
//	void stackTop();
//	void isEmpty();
//	void isFull();
//	void display();
//}*top,*s=NULL;
//
//void stack::push(int data) {
//	stack *t;
//	t = new stack;
//	if (t == NULL) {
//		cout << "Stack Overflow bhai" << endl;
//	}
//	else {
//		if (s == nullptr) {
//			s = new stack;
//			s->data = data;
//			s->next = nullptr;
//			top = s;
//		}
//		else {
//			t->data = data;
//			t->next = top;
//			top = t;
//		}
//	}
//}
//int stack::pop() {
//	int x = -1;
//	if (top == nullptr)
//		cout << "Stack Underflow bhai" << endl;
//	else {
//		x = top->data;
//		stack* n = top;
//		top = top->next;
//		delete n;
//	}
//	return x;
//}
//int stack::peek(int index) {
//	if (top == nullptr)
//		cout << "Kuch nai hai peek kya karega" << endl;
//	else {
//		index = index - 1;
//		stack* p = top;
//		while (index--) {
//			p = p->next;
//			if (p == nullptr) {
//				cout << "Bhai index ke bahar chala gya tu peek lene" << endl;
//				return 0;
//			}			
//		}
//		cout << p->data << " hai jo tu peek karra hai" << endl;
//	}
//}
//void stack::stackTop() {
//	if (top == nullptr)
//		cout << "Stack is empty" << endl;
//	else
//		cout << top->data << " is the top element of stack" << endl;
//}
//void stack::isEmpty() {
//	if (top == nullptr)
//		cout << "Ha bhai empty hai" << endl;
//	else
//		cout << "Nai bhai empty nai hai" << endl;
//}
//void stack::isFull(){
//	stack* y = new stack;
//	if (y == nullptr)
//		cout << "Ha bhai Full hai" << endl;
//	else
//		cout << "Nai bhai Full nai hai" << endl;
//}
//void stack::display() {
//	if (top == nullptr)
//		cout << "kuch nai hai display karne ke liye " << endl;
//	else {
//		stack* q;
//		q = top;
//		while (q != nullptr) {
//			cout << q->data << " ";
//			q = q->next;
//		}
//	}
//}
//
//int main()
//{
//	stack s1;
//	s1.display();
//	s1.isEmpty();
//	s1.push(10);
//	s1.isEmpty();
//	s1.push(20);
//	s1.push(30);
//	s1.push(40);
//	s1.stackTop();
//	s1.push(50);
//	s1.stackTop();
//	s1.isFull();
//	s1.isEmpty();
//
//	s1.peek(1);
//	s1.peek(2);
//	s1.peek(3);
//	s1.peek(4);
//	s1.peek(5);
//	s1.peek(7);
//
//	s1.display();
//	cout << endl;
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
//	s1.display();
//
//	return 0;
//}