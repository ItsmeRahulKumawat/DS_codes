//#include<iostream>
//using namespace std;
//
//bool flagcall = false;
//
//class node {
//public:
//	int data;
//	node* next;
//};
//
//class LL {
//private:
//	node* first;
//public:
//	LL() {
//		first = NULL;
//	}
//	LL(int A[], int size)
//	{
//		node* last, *t;
//		first = new node;
//		first->data = A[0];
//		first->next = NULL;
//		last = first;
//		for (int i = 1; i < size; i++)
//		{
//			t = new node;
//			t->data = A[i];
//			t->next = NULL;
//			last->next = t;
//			last = t;
//		}
//	}
//	/*~LL() {
//		node* p = first;
//		while (first != NULL)
//		{
//			first = first->next;
//			delete p;
//			p = first;
//		}
//	}*/
//
//	void circularLL(int A[], int size);
//	void display();
//	void circularDislpay();
//	void rec_circularDislpay(node* q);
//	int length();
//	int insertin_CLL(int pos, int ele);
//	int deleteElement(int pos);
//};
//
//void LL::display()
//{
//	node* p = first;
//	while (p != NULL)
//	{
//		cout << p->data << "->";
//		p = p->next;
//	}
//}
//
//void LL::circularLL(int A[], int size)
//{
//	node* p, * t;
//	p = first;
//	first->data = A[0];
//	first->next = first;
//	for (int i = 1; i < size; i++)
//	{
//		t = new node;
//		t->data = A[i];
//		t->next = first;
//		p->next = t;
//		p = t;
//	}
//
//}
//
//void LL::circularDislpay()
//{
//	node* p = first;
//	do {
//		cout << p->data << "->";
//		p = p->next;
//	} while (p != first);
//}
//
//void LL::rec_circularDislpay(node* q) // ye c++ me nai hora bcos ham agar q = first karte hai to vo har bar recursion
//									// hote time vo sirf first element he lega jo ki hai 10 ye c me hoga with struct node
//{
//	if (flagcall == false)
//	{
//		q = first;
//		flagcall = true;
//	}
//		
//	static int flag = 0;
//	if (q != first || flag == 0)
//	{
//		flag = 1;
//		cout << q->data << "->";
//		rec_circularDislpay(q->next);
//	}
//}
//
//int LL::length()
//{
//	int len = 0;
//	node* p = first;
//	do {
//		len++;
//		p = p->next;
//	} while (p != first);
//	return len;
//}
//int LL :: insertin_CLL(int pos, int ele)
//{
//	node* p = first;
//	node* r = NULL,* q = NULL;
//	node* t;
//
//	if (pos < 1 || pos > length())
//		return 0;
//	if (pos == 1)
//	{
//		t = new node;
//		t->data = ele;
//		if (first == NULL)
//		{
//			first = t;
//			first->next = first;
//		}
//		else
//		{
//			while (p->next != first)
//			{
//				p = p->next;
//			}
//			p->next = t;
//			t->next = first;
//			first = t;
//		}
//	}
//	else
//	{
//		pos = pos - 1;
//		while (pos--)
//		{
//			q = p;
//			p = p->next;
//		}
//		t = new node;
//		t->data = ele;
//		t->next = q->next;
//		q->next = t;
//	}
//}
//int LL :: deleteElement(int pos)
//{
//	int x;
//	node* p = first;
//	node* q = new node;
//	if (pos < 1 || pos >length())
//		return -1;
//	if (pos == 1)
//	{
//		while (p->next != first)
//		{
//			p = p->next;
//		}
//		x = first->data;
//		if (first == p)
//		{
//			delete first;
//			first = NULL;
//		}
//		else
//		{
//			p->next = first->next;
//			delete first;
//			first = p->next;
//		}
//		return x;
//	}
//	else
//	{
//		for (int i = 0; i < pos-2; i++)
//		{
//			p = p->next;
//		}
//		q = p->next;
//		p->next = q->next;
//		x = q->data;
//		delete q;
//		return x;
//	}
//}
//int main()
//{
//	int A[] = { 10,20,30,40,50 };
//	LL l(A,5);
//	cout << endl;
//	l.display();
//	cout << endl;
//	l.circularLL(A, 5);
//	cout << endl;
//	l.circularDislpay();
//	cout << endl;
//	cout << "Recursion Display" << endl;
//	node* q = new node;
//	l.rec_circularDislpay(q); // ye c++ me nai hora c me hoga 
//	cout << endl;
//	l.insertin_CLL(2, 22);
//	l.circularDislpay();
//	cout << endl;
//	int x = l.deleteElement(6);
//	cout << x << " is deleted " << endl;
//	cout << endl;
//	l.circularDislpay();
//
//	return 0;
//}