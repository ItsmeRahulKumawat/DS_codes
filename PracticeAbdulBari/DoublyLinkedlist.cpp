//#include<iostream>
//using namespace std;
//
//struct node {
//	struct node* prev;
//	int data;
//	struct node* next;
//}*first=NULL;
//
//void create(int A[], int size) {
//	struct node * t, * last;
//	first = new node;
//	first->data = A[0];
//	first->prev = NULL;
//	first->next = NULL;
//	last = first;
//	for (int i = 1; i < size; i++)
//	{
//		t = new node;
//		t->data = A[i];
//		t->next = last->next;
//		t->prev = last;
//		last->next = t;
//		last = t;
//	}
//}
//int length(struct node *p)
//{
//	int len = 0;
//	while (p != NULL)
//	{
//		len++;
//		p = p->next;
//	}
//	return len;
//}
//void display(struct node *p) {
//	while (p != NULL)
//	{
//		cout << p->data << "->";
//		p = p->next;
//	}
//	cout << endl;
//}
//int insert(struct node* p, int pos, int ele)
//{
//	struct node* t, *q;
//	if (pos < 1 || pos > length(first)+1)
//		return -1;
//	if (pos == 1)
//	{
//		if (first == NULL)
//		{
//			first->data = ele;
//			first->next = first->prev = NULL;
//		}
//		else {
//			t = new node;
//			t->data = ele;
//			t->prev = NULL;
//			t->next = first;
//			first->prev = t;
//			first = t;
//		}
//	}
//	else {
//		q = new node;
//		t = new node;
//		pos = pos - 1;
//		while (pos--)
//		{
//			q = p;
//			p = p->next;
//		}
//		
//		t->data = ele;
//		q->next = t;
//		
//		if (p != NULL) {
//			t->next = p;
//			p->prev = t;
//		}
//		t->prev = q;
//		if (p == NULL)
//		{
//			t->next = NULL;
//		}
//	}
//}
////void isDoubly(struct node* p) {
////	int len_str = 0;
////	int len_rev = 0;
////	while (p->next!=NULL)
////	{
////		len_str++;
////		p = p->next;
////	}
////	while (p->prev != NULL)
////	{
////		len_rev++;
////		p = p->prev;
////	}
////	if (len_rev == len_str)
////		cout << "Yes this is doubly linkedlist" << endl;
////	else
////		cout << "No something is wrong in this doubly linkedlist" << endl;
////}
//int del(struct node* p, int pos)
//{
//	int x = 0;
//	struct node* t, * q;
//	if (pos < 1 || pos > length(first) + 1)
//		return -1;
//	if (pos == 1)
//	{
//		if (first == NULL)
//		{
//			cout << "Nothing to delete" << endl;
//		}
//		else {
//			p = first;
//			x = p->data;
//			q = p->next;
//			delete p;
//			q->prev = NULL;
//			first = q;
//			return x;
//		}
//	}
//	else {
//		t = new node;
//		q = new node;
//		pos = pos - 1;
//		while (pos--)
//		{
//			q = p;
//			p = p->next;
//		}
//		if (p->next == NULL)
//		{
//			x = p->data;
//			delete p;
//			q->next = NULL;
//			return x;
//		}
//			
//		if (p->next != NULL)
//		{
//			x = p->data;
//			q->next = p->next;
//			t = p->next;
//			q = t->prev;
//			delete p;
//			return x;
//		}
//	}
//}
//int main()
//{
//	int A[] = { 10,20,30,40,50 };
//	create(A, 5);
//	display(first);
//	cout << endl;
//	cout <<"Length is "<< length(first) << endl;
//	insert(first, 1, 5);
//	cout << endl;
//	display(first);
//	insert(first, 7, 15);
//	cout << endl;
//	display(first);
//	cout << endl;
//	//isDoubly(first);
//	cout << endl;
//	cout << del(first, 1) << " is deleted" << endl;
//	cout << endl;
//	display(first);
//	cout << endl;
//	//isDoubly(first);
//	cout << endl;
//	cout << del(first, 5) << " is deleted" << endl;
//	cout << del(first, 5) << " is deleted" << endl;
//	cout << endl;
//	display(first);
//	cout << endl;
//	//isDoubly(first);
//	cout << endl;
//	return 0;
//}